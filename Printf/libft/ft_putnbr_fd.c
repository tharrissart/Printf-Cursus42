/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thharris <thharris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 13:14:07 by thharris          #+#    #+#             */
/*   Updated: 2025/12/29 03:07:02 by thharris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_fd(int n, int fd)
{
	size_t	size;

	size = 11;
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return (size);
	}
	size = 0;
	if (n < 0)
	{
		write(fd, "-", 1);
		n *= -1;
		size++;
	}
	if (n > 9)
		size += ft_putnbr_fd(n / 10, fd);
	size += ft_putchar_fd((n % 10 + 48), fd);
	return (size);
}
/* int main(void)
{
	ft_putnbr_fd(-2147483648, 1);
	write(1, "\n", 1);
	ft_putnbr_fd(42, 1);
	write(1, "\n", 1);
	ft_putnbr_fd(-45646, 1);
	write(1, "\n", 1);
} */