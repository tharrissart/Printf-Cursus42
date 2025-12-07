/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thharris <thharris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 12:18:43 by thharris          #+#    #+#             */
/*   Updated: 2025/12/02 03:53:08 by thharris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcpy(char *dest, const char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(const char *s)
{
	const char	*dest;
	size_t		len_dest;

	len_dest = ft_strlen((char *)s);
	dest = malloc(sizeof(char) * (len_dest + 1));
	if (!dest)
		return (NULL);
	if (s)
		ft_strcpy((char *)dest, s);
	return ((char *)dest);
}
/* #include <stdio.h>
#include <string.h>

int main()
{
	char	src[] = "";
	char	*test = ft_strdup(src);
	char	*test2 = strdup(src);
	printf("%s\n", test);
	printf("%s\n", test2);
	free(test);
	free(test2);
	return (0);
} */