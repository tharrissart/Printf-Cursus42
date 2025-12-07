/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thharris <thharris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 13:29:41 by thharris          #+#    #+#             */
/*   Updated: 2025/11/18 14:21:57 by thharris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t s)
{
	size_t	i;

	i = 0;
	if (s > 0)
	{
		while (src[i] != '\0' && i < (s - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (ft_strlen((char *)src));
}
/* #include <stdio.h>
#include <bsd/string.h>
int main(void)
{
	char dest[] = "Hello";
	char src[] = "Bonjours";
	size_t size = 4;
	printf("%zu\n", strlcpy(dest, src, size));
	printf("%zu\n", ft_strlcpy(dest, src, size));
	return(0);
} */