/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvasque <brvasque@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 09:14:12 by brvasque          #+#    #+#             */
/*   Updated: 2024/03/01 08:27:35 by brvasque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_printf.h"

int	ft_putnbr_counter(int nb)
{
	int				i;
	long long int	a;

	i = 0;
	a = nb;
	if (a < 0)
	{
		i++;
		a = -nb;
	}
	while (a / 10 != 0)
	{
		i++;
		a /= 10;
	}
	i++;
	return (i);
}

int	ft_putnbr(int nb)
{
	int	c;
	int	div;

	c = ft_putnbr_counter(nb);
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	div = 1;
	while (nb / div >= 10)
		div *= 10;
	while (div > 0)
	{
		ft_putchar((nb / div) + '0');
		nb %= div;
		div /= 10;
	}
	return (c);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%i\n", ft_putnbr(-2147483648));
	return (0);
}*/
