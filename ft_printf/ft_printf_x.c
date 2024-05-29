/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvasque <brvasque@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 18:38:14 by brvasque          #+#    #+#             */
/*   Updated: 2024/03/02 19:07:24 by brvasque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_puthex(unsigned int n, char *hex_d, int uppercase)
{
	int	result;

	result = 0;
	if (n >= 16)
	{
		result += ft_puthex(n / 16, hex_d, uppercase);
		result += ft_puthex(n % 16, hex_d, uppercase);
	}
	else
	{
		if (uppercase)
			ft_putchar(ft_toupper(hex_d[n]));
		else
			ft_putchar(hex_d[n]);
		result++;
	}
	return (result);
}

int	ft_printf_x(unsigned int nb, int uppercase)
{
	char	*hex_digits_lower;
	char	*hex_digits_upper;

	hex_digits_lower = "0123456789abcdef";
	hex_digits_upper = "0123456789ABCDEF";
	if (uppercase)
		return (ft_puthex(nb, hex_digits_upper, 1));
	else
		return (ft_puthex(nb, hex_digits_lower, 0));
}
