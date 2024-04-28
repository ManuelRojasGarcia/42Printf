/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marojas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 11:32:05 by marojas-          #+#    #+#             */
/*   Updated: 2024/04/28 13:21:43 by marojas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>

int		ft_printf(char const *str, ...);
void	ft_putchar(char c, int *count);
void	ft_putnbr(int n, int *count);
void	ft_putstr(char *str, int *count);
void	ft_putnbrpositive(unsigned int n, int *count);
void	ft_hexadecimallower(unsigned long int n, int *count);
void	ft_hexadecimalupper(unsigned int n, int *count);
void	ft_pointer(void *ptr, int *count);

#endif
