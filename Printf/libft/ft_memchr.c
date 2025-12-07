/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thharris <thharris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 11:35:05 by thharris          #+#    #+#             */
/*   Updated: 2025/12/02 02:42:04 by thharris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*temp;
	size_t			i;

	i = 0;
	temp = (unsigned char *)s;
	while (i < n)
	{
		if (temp[i] == (unsigned char)c)
			return (&temp[i]);
		i++;
	}
	return (NULL);
}
/* #include <stdio.h>
#include <string.h>

int main(void)
{
	char s[] = "bonjours";
	// int c = 'n';
	// int n = 7;
	printf("%s\n", (char *)(ft_memchr(s, 'b', 1)));
	return (0);
} */