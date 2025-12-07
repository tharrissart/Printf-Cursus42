/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thharris <thharris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 11:44:39 by thharris          #+#    #+#             */
/*   Updated: 2025/12/02 02:39:21 by thharris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*tempdest;
	unsigned char	*tempsrc;

	i = -1;
	if ((!dest && !src) && n > 0)
		return (NULL);
	tempdest = (unsigned char *)dest;
	tempsrc = (unsigned char *)src;
	while (++i < n)
		tempdest[i] = tempsrc[i];
	return (tempdest);
}
/* #include <stdio.h>
int main(void)
{
	char dest[] = "Bonjours";
	char src[] = "Hello";
	printf("%s\n", (char *)ft_memcpy((void *)dest, (const void *)src, 9));
	printf("%s\n", (char *)memcpy((void *)dest, (const void *)src, 9));
} */