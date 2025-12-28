/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utiles.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thharris <thharris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 21:02:02 by thharris          #+#    #+#             */
/*   Updated: 2025/12/24 00:22:48 by thharris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	put_unsigned_nbr_fd(unsigned int nbr, int fd)
{
	size_t	size;

	size = 0;
	if (nbr > 9)
	{
		put_unsigned_nbr_fd(nbr / 10, fd);
		size++;
	}
	ft_putchar_fd((nbr % 10 + 48), fd);
	return (size);
}

int	basehexa_upper_fd(int nbr, int fd)
{
	char *str;
	size_t	size;

	size = 0;
	str = "0123456789ABCDEF";
	if (nbr < 0)
	{
		ft_putchar_fd('-', fd);
		nbr *= -1;
		size++;
	}
	if (nbr)
	{
		basehexa_upper_fd(nbr / 16, fd);
		ft_putchar_fd(str[nbr % 16], fd);
		size++;
	}
	return (size);
}

int	basehexa_lower_fd(unsigned long nbr, int fd)
{
	char *str;
	size_t	size;

	size = 0;
	str = "0123456789abcdef";
	if (nbr < 0)
	{
		ft_putchar_fd('-', fd);
		nbr *= -1;
		size++;
	}
	if (nbr)
	{
		basehexa_lower_fd(nbr / 16, fd);
		ft_putchar_fd(str[nbr % 16], fd);
		size++;
	}
	return (size);
}

int	pointeur(unsigned long ptr, int fd)
{
	size_t	size;

	write(fd, "0x", 2);
	size = basehexa_lower_fd(ptr, fd);
	return (size + 2);
}