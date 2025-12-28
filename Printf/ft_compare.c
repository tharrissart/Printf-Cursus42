/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compare.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thharris <thharris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 03:12:06 by thharris          #+#    #+#             */
/*   Updated: 2025/12/24 00:20:33 by thharris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_execute(char c, va_list args, size_t size)
{
	if (c == 'c')
		size += ft_putchar_fd(va_arg(args, int), 1);
	else if (c == 's')
		size += ft_putstr_fd(va_arg(args, char *), 1);
	else if (c == 'p')
		size += pointeur(va_arg(args, unsigned long), 1);
	else if (c == 'd')
		size += ft_putnbr_fd(va_arg(args, int), 1);
	else if (c == 'i')
		size += ft_putnbr_fd(va_arg(args, int), 1);
	else if (c == 'u')
		size += put_unsigned_nbr_fd(va_arg(args, unsigned int), 1);
	else if (c == 'x')
		size += basehexa_lower_fd(va_arg(args, int), 1);
	else if (c == 'X')
		size += basehexa_upper_fd(va_arg(args, int), 1);
	else if (c == '%')
		size += ft_putchar_fd('%', 1);
	return (size);
}
