/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thharris <thharris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 13:40:37 by thharris          #+#    #+#             */
/*   Updated: 2025/11/18 14:19:58 by thharris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little[j] == '\0')
		return ((char *)big);
	while (big[i])
	{
		j = 0;
		while (((big[i + j] == little[j]) && little[j] && big[i + j])
			&& i + j < len)
			j++;
		if (little[j] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
/* #include <stdio.h>
#include <bsd/string.h>
int main(void)
{
	// char big[] = "Bonjours a toutes et a tous et me faites pas chier";
	// char little[] = "toutes les salopes";
	char haystack[30] = "aaabcabcd";
	// char needle[10] = "aabc";
	// int len = 3;
	printf("%s\n", ft_strnstr(haystack, "cd", 8));
	printf("%s\n", strnstr(haystack, "cd", 8));
	return (0);
} */