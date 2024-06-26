/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marojas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 17:55:23 by marojas-          #+#    #+#             */
/*   Updated: 2024/05/10 14:15:34 by marojas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

void	ft_putnbr(int n, int *count)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		*count += 11;
	}
	else
	{
		if (n < 0)
		{
			n *= -1;
			*count += 1;
			write(1, "-", 1);
		}
		if (n > 9)
		{
			ft_putnbr(n / 10, count);
			ft_putnbr(n % 10, count);
		}
		if (n < 10)
			ft_putchar((char){'0' + n}, count);
	}
}
