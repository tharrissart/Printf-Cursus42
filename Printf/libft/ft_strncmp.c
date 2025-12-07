/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thharris <thharris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 14:51:44 by thharris          #+#    #+#             */
/*   Updated: 2025/11/18 13:36:27 by thharris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (((unsigned char *)s1)[i] == ((unsigned char *)s2)[i] &&
		((unsigned char *)s1)[i] != '\0' && i < n)
		i++;
	if (i == n)
		return (0);
	return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}
/* #include <stdio.h>
#include <string.h>
int main(void)
{
	char s1[] = "\200";
	char s2[] = "\00";
	printf("%d\n", ft_strncmp(s1, s2, 1));
	printf("%d\n", strncmp(s1, s2, 1));
	return (0);
} */