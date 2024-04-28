/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrpositive.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marojas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:47:48 by marojas-          #+#    #+#             */
/*   Updated: 2024/04/28 15:10:10 by marojas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

void	ft_putnbrpositive(unsigned int n, int *count)
{
	if (n > 9)
	{
		ft_putnbrpositive(n / 10, count);
		ft_putnbrpositive(n % 10, count);
	}
	if (n < 10)
		ft_putchar((char){'0' + n}, count);
}
