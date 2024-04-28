/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadecimallower.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marojas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 13:50:41 by marojas-          #+#    #+#             */
/*   Updated: 2024/04/14 18:09:53 by marojas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

void	ft_hexadecimallower(unsigned long int n, int *count)
{
	int		remainder;
	char	position;

	remainder = n % 16;
	if (n >= 16)
		ft_hexadecimallower(n / 16, count);
	remainder = n % 16;
	if (remainder < 10)
		position = '0' + remainder;
	else
		position = ('a' + remainder - 10);
	ft_putchar(position, count);
}
