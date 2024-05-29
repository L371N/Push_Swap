/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvasque <brvasque@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 11:07:13 by brvasque          #+#    #+#             */
/*   Updated: 2024/05/18 11:07:34 by brvasque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;
	unsigned char	x;

	i = 0;
	ptr = (unsigned char *)str;
	x = (unsigned char)c;
	while (i < n)
	{
		ptr[i] = x;
		i++;
	}
	return (str);
}
