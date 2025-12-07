/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thharris <thharris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 16:37:31 by thharris          #+#    #+#             */
/*   Updated: 2025/12/02 02:45:29 by thharris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dest_len;
	size_t	src_len;

	dest_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (size == 0)
		return (ft_strlen(src));
	if (size < dest_len)
		return (size + src_len);
	i = 0;
	while (src[i] && dest_len + i < size - 1)
	{
		dst[dest_len + i] = src[i];
		i++;
	}
	dst[dest_len + i] = '\0';
	return (dest_len + src_len);
}
/* #include <stdio.h>
#include <bsd/string.h>
int main(void)
{
	char dst[] = "BONJOURS";
	char src[] = "Bonjours";
	int size = 10;
	printf("%zu\n", ft_strlcat(dst, src, size));
	printf("%zu\n", strlcat(dst, src, size));
	return (0);
} */