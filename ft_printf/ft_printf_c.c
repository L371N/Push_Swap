/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_c.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvasque <brvasque@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 12:47:03 by brvasque          #+#    #+#             */
/*   Updated: 2024/02/26 12:54:39 by brvasque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

int	ft_printf_c(char c)
{
	return (write(1, &c, 1));
}
/*
int main()
{
	printf("el caracter original es: %c\n", 'a');
	ft_printf("mi caracter es: %c\n", 'a');
	return (0);
}*/
