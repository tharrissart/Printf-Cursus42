/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thharris <thharris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 14:03:35 by thharris          #+#    #+#             */
/*   Updated: 2025/11/04 12:03:42 by thharris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*temp;
	size_t	i;

	temp = (char *)s;
	i = 0;
	while (i < n)
		temp[i++] = c;
	return ((void *) temp);
}
/* #include <stdio.h>
int main(void)
{
	char test[] = "Salut a tous";
	
	printf("%s\n", (char *)ft_memset((void*) test, 's', 8));
	return (0);
} */