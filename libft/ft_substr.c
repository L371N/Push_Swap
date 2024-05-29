/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvasque <brvasque@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 15:26:55 by brvasque          #+#    #+#             */
/*   Updated: 2024/05/29 11:32:06 by brvasque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*substr;

	if (ft_strlen(str) < start)
		len = 0;
	else if (ft_strlen(str + start) < len)
		len = ft_strlen(str + start);
	substr = ft_calloc(sizeof(char), len + 1);
	if (!substr)
		return (NULL);
	if (len)
		ft_strlcpy(substr, str + start, len + 1);
	return (substr);
}
