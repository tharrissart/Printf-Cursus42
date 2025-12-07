/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thharris <thharris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 11:51:01 by thharris          #+#    #+#             */
/*   Updated: 2025/11/13 18:11:51 by thharris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*temps1;
	char	*temps2;
	char	*newstring;
	size_t	i;
	size_t	j;

	temps1 = (char *)s1;
	temps2 = (char *)s2;
	i = 0;
	j = 0;
	newstring = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (newstring == 0)
		return (NULL);
	while (temps1[i])
	{
		newstring[i] = temps1[i];
		i++;
	}
	while (temps2[j])
	{
		newstring[i] = temps2[j];
		i++;
		j++;
	}
	return (newstring[i] = '\0', newstring);
}
/* #include <stdio.h>
int main()
{
	char *s1 = "Bonjours";
	char *s2 = "Tout le monde";
	char *s3 = ft_strjoin(s1, s2);
	printf("%s\n", s3);
	free(s3);
} */
