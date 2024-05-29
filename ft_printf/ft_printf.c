/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvasque <brvasque@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 11:57:49 by brvasque          #+#    #+#             */
/*   Updated: 2024/05/25 11:42:53 by brvasque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

int	ft_format_list(va_list args, const char *f)
{
	int	res;

	res = 0;
	if (*f == '%')
		res = ft_printf_c('%');
	else if (*f == 'c')
		res = ft_printf_c(va_arg(args, int));
	else if (*f == 's')
		res = ft_printf_s(va_arg(args, char *));
	else if (*f == 'p')
		res = ft_printf_p(va_arg(args, void *));
	else if (*f == 'd' || *f == 'i')
		res = ft_putnbr(va_arg(args, int));
	else if (*f == 'u')
		res = ft_printf_u(va_arg(args, unsigned int));
	else if (*f == 'x' || *f == 'X')
		res = ft_printf_x(va_arg(args, unsigned int), (*f == 'X'));
	if (res < 0)
		return (-1);
	return (res);
}

int	ft_printf(char const *format, ...)
{
	va_list		ap;
	int			total;
	int			fmt;

	va_start(ap, format);
	total = 0;
	while (*format != '\0')
	{
		if (*format == '%')
		{
			fmt = ft_format_list(ap, ++format);
			if (fmt == -1)
				return (-1);
			total += fmt;
		}
		else
		{
			if (ft_printf_c(*format) == -1)
				return (-1);
			total++;
		}
		format++;
	}
	va_end(ap);
	return (total);
}
