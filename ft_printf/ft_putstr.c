/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvasque <brvasque@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 10:36:07 by brvasque          #+#    #+#             */
/*   Updated: 2024/03/14 10:40:26 by brvasque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *str)
{
	int			j;

	j = 0;
	while (str[j] != '\0')
	{
		ft_putchar(str[j]);
		j++;
	}
}
