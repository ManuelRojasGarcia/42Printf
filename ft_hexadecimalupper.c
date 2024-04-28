/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadecimalupper.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marojas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 13:58:15 by marojas-          #+#    #+#             */
/*   Updated: 2024/04/14 19:53:00 by marojas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>
#include <stdio.h>

void	ft_hexadecimalupper(unsigned int n, int *count)
{
	int		remainder;
	char	position;

	remainder = 0;
	if (n >= 16)
		ft_hexadecimalupper(n / 16, count);
	remainder = n % 16;
	if (remainder < 10)
		position = '0' + remainder;
	else
		position = ('A' + remainder - 10);
	ft_putchar(position, count);
}
