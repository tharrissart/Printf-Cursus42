/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thharris <thharris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 16:59:45 by thharris          #+#    #+#             */
/*   Updated: 2025/12/02 02:25:23 by thharris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*newstring;
	size_t	i;

	i = 0;
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len + start > ft_strlen(s))
		len = ft_strlen(s) - start;
	newstring = malloc(sizeof(char) * (len + 1));
	if (!newstring)
		return (NULL);
	while (s[i + start] && i < len)
	{
		newstring[i] = s[i + start];
		i++;
	}
	newstring[i] = '\0';
	return (newstring);
}

/* #include <stdio.h>
int main()
{
	char s[] = "Bonjours tout le monde";
	int start = 1;
	int len = 3;
	printf("%s\n", ft_substr(s, start, len));
	free(ft_substr(s, start, len));
} */