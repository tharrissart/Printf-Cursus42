/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utiles.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thharris <thharris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 21:02:02 by thharris          #+#    #+#             */
/*   Updated: 2025/12/29 03:17:09 by thharris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libftprintf.h"

int	put_unsigned_nbr_fd(unsigned int nbr, int fd)
{
	size_t	size;

	size = 0;
	if (nbr > 9)
		size += put_unsigned_nbr_fd(nbr / 10, fd);
	size += ft_putchar_fd((nbr % 10 + 48), fd);
	return (size);
}

int	basehexa_upper_fd(int nbr, int fd)
{
	char	*str;
	size_t	size;

	size = 0;
	str = "0123456789ABCDEF";
	if (nbr < 0)
	{
		size += ft_putchar_fd('-', fd);
		nbr *= -1;
	}
	if (nbr)
	{
		size += basehexa_upper_fd(nbr / 16, fd);
		size += ft_putchar_fd(str[nbr % 16], fd);
	}
	return (size);
}

int	basehexa_lower_fd(unsigned long nbr, int fd)
{
	char	*str;
	size_t	size;

	size = 0;
	str = "0123456789abcdef";
	if (nbr)
	{
		size += basehexa_lower_fd(nbr / 16, fd);
		size += ft_putchar_fd(str[nbr % 16], fd);
	}
	return (size);
}

int	pointeur(unsigned long ptr, int fd,size_t size)
{
	write(fd, "0x", 2);
	size = basehexa_lower_fd(ptr, fd) + 2;
	return (size);
}

int	ft_execute(char c, va_list args, size_t size)
{
	if (c == 'c')
		size += ft_putchar_fd(va_arg(args, int), 1);
	else if (c == 's')
		size += ft_putstr_fd(va_arg(args, char *), 1);
	else if (c == 'p')
		size += pointeur(va_arg(args, unsigned long), 1, size);
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
