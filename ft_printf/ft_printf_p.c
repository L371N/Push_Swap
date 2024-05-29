/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvasque <brvasque@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 00:53:43 by brvasque          #+#    #+#             */
/*   Updated: 2024/03/02 13:11:21 by brvasque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

static int	ft_puthex(unsigned long int n)
{
	char	*hex_d;
	int		result;

	hex_d = "0123456789abcdef";
	result = 0;
	if (n >= 16)
	{
		result += ft_puthex(n / 16);
		result += ft_puthex(n % 16);
	}
	else
	{
		ft_putchar(hex_d[n]);
		result++;
	}
	return (result);
}

int	ft_printf_p(void *ptr)
{
	unsigned long int	i;

	i = (unsigned long int)ptr;
	if (i == 0)
	{
		ft_putstr("0x0");
		return (3);
	}
	ft_putstr("0x");
	return (ft_puthex(i) + 2);
}
/*
int main()
{
	int		x  = 42;
	int		*ptr = &x;

	ft_printf_p("mi puntero es: %p\n", ptr);
	printf("el puntero original es: %p\n", ptr);
	return (0);
}*/
