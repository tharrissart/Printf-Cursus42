/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thharris <thharris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 13:14:28 by thharris          #+#    #+#             */
/*   Updated: 2026/01/16 09:47:57 by thharris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	if (!s)
		return(write(1, "(null)", 6), 6);
	while (s[i])
	{
		write (fd, &s[i], 1);
		i++;
	}
	return (i);
}
/* int main()
{
	ft_putstr_fd("Bonjours", 1);
} */