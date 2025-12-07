/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thharris <thharris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 14:26:34 by thharris          #+#    #+#             */
/*   Updated: 2025/12/02 02:43:18 by thharris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*tempdest;
	unsigned char	*tempsrc;

	tempsrc = (unsigned char *)src;
	tempdest = (unsigned char *)dest;
	if (tempdest > tempsrc)
	{
		while (n--)
			tempdest[n] = tempsrc[n];
	}
	else
		ft_memcpy(tempdest, tempsrc, n);
	return (dest);
}
/* #include <stdio.h>
#include <string.h>
int main(void)
{
	char test1[] = "D";
	char test2[] = "";
	ft_memmove(test2, test1, 0);
	printf("%s\n", test2);
	memmove(test2, test1, 0);
	printf("%s\n", test2);
} */