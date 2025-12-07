/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thharris <thharris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 14:41:20 by thharris          #+#    #+#             */
/*   Updated: 2025/12/02 02:34:59 by thharris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*str;

	start = 0;
	end = ft_strlen(s1);
	while (start < end && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	str = malloc(end - start + 1);
	if (!str)
		return (NULL);
	if (str)
		ft_memcpy(str, s1 + start, end - start);
	str[end - start] = '\0';
	return (str);
}
/* #include <stdio.h>
int main()
{
	char *s1 = "   Hello tous le mode!   ";
	char *set = "";
	char *s2 = ft_strtrim(s1, set);
	printf("%s\n", s2);
	free(s2);
} */