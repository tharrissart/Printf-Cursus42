/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thharris <thharris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 11:55:26 by thharris          #+#    #+#             */
/*   Updated: 2025/11/18 17:03:27 by thharris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*temps1;
	const unsigned char	*temps2;
	size_t				i;

	i = 0;
	temps1 = (const unsigned char *)s1;
	temps2 = (const unsigned char *)s2;
	while (i < n)
	{
		if (temps1[i] != temps2[i])
			return (temps1[i] - temps2[i]);
		i++;
	}
	return (0);
}
/* #include <stdio.h>
#include <string.h>
int main(void)
{
	char s1[] = "HelloWorld!!";
	char s2[] = "Helloworld!";
	int n = 15;
	printf("%d\n", ft_memcmp(s1, s2, n));
	printf("%d\n", memcmp(s1, s2, n));
	return (0);
} */