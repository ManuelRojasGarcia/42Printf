/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marojas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 13:46:26 by marojas-          #+#    #+#             */
/*   Updated: 2024/04/28 13:19:27 by marojas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"
#include <stdio.h>

static void	ft_formatter(va_list arguments, char c, int *count)
{
	if (c == 'c')
		ft_putchar(va_arg(arguments, int), count);
	else if (c == 's')
		ft_putstr(va_arg(arguments, char *), count);
	else if (c == 'i' || c == 'd')
		ft_putnbr(va_arg(arguments, int), count);
	else if (c == '%')
		ft_putchar('%', count);
	else if (c == 'u')
		ft_putnbrpositive(va_arg(arguments, unsigned int), count);
	else if (c == 'x')
		ft_hexadecimallower(va_arg(arguments, unsigned int), count);
	else if (c == 'X')
		ft_hexadecimalupper(va_arg(arguments, unsigned int), count);
	else if (c == 'p')
		ft_pointer(va_arg(arguments, void *), count);
}

int	ft_printf(char const *str, ...)
{
	va_list	arguments;
	int		i;
	int		count;

	i = 0;
	count = 0;
	if (!str)
		return (0);
	va_start(arguments, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			ft_formatter(arguments, str[i], &count);
		}
		else
			ft_putchar(str[i], &count);
		i++;
	}
	va_end(arguments);
	return (count);
}
/*
int	main(void)
{
	int i = printf("%s\n", (char *)NULL);
	int u = ft_printf("%s\n", (char *)NULL);
	printf("%i\n", i - u);
	return (0);
}
*/
