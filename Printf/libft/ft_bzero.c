/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thharris <thharris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 16:16:40 by thharris          #+#    #+#             */
/*   Updated: 2025/11/13 14:41:36 by thharris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*temp;

	temp = (char *)s;
	i = 0;
	while (i < n)
	{
		temp[i] = '\0';
		i++;
	}
}
/* #include <stdio.h>
#include <string.h>
int main(void)
{
	char s[] = "Bonjours a tous et toutes, me faites pas chier";
	ft_bzero(s, 5);
	printf("%s\n", s);
	bzero(s, 5);
	printf("%s\n", s);
	return (0);
} */