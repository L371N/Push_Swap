/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvasque <brvasque@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 11:11:08 by brvasque          #+#    #+#             */
/*   Updated: 2024/05/18 11:11:13 by brvasque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putnbr(int nb, int fd)
{
	if (nb <= -10)
		ft_putnbr(nb / 10, fd);
	ft_putchar_fd(-(nb % 10) + '0', fd);
}

void	ft_putnbr_fd(int nb, int fd)
{
	if (nb < 0)
		ft_putchar_fd('-', fd);
	else
		nb = -nb;
	ft_putnbr(nb, fd);
}
