/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvasque <brvasque@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 16:01:45 by brvasque          #+#    #+#             */
/*   Updated: 2024/03/02 18:35:34 by brvasque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

int	ft_put_unsigned(unsigned int nb)
{
	unsigned long int	x;

	x = 0;
	if (nb == 0)
		return (1);
	while (nb != 0)
	{
		x++;
		nb /= 10;
	}
	if (x == 0)
		x = 1;
	return (x);
}

int	ft_printf_u(unsigned int nb)
{
	int		count;
	char	buffer[12];
	int		i;

	i = 0;
	count = ft_put_unsigned(nb);
	if (nb == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	else
	{
		while (nb != 0)
		{
			buffer[i++] = nb % 10 + '0';
			nb /= 10;
		}
		while (i > 0)
		{
			write(1, &buffer[--i], 1);
		}
	}
	return (count);
}
/*
int main()
{
	ft_printf_d("mi resultado es: %u\n", 42, 24);
	printf("el resultado original es: %u\n", 42, 24);
	return (0)
}*/
