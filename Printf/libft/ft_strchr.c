/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thharris <thharris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 10:36:07 by thharris          #+#    #+#             */
/*   Updated: 2025/11/18 15:19:20 by thharris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)s + i);
	return (NULL);
}
/* #include <stdio.h>
#include <string.h>

int main(void)
{
	char *expecte = ft_strchr("teste", 0);
	char *result = strchr("teste", 0);
	printf("%p=%s\n",&expecte, expecte);
	printf("%p=%s\n",&result, result);
	return (0);
} */