/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thharris <thharris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 13:58:26 by thharris          #+#    #+#             */
/*   Updated: 2025/12/29 22:11:55 by thharris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*memory;

	if (size != 0 && nmemb > SIZE_MAX)
		return (NULL);
	memory = malloc(nmemb * size);
	if (!memory)
		return (NULL);
	ft_bzero(memory, nmemb * size);
	return (memory);
}

/*
#include <stdio.h>

int main()
{
	size_t	nmemb = 2;
	size_t size = 3;
	printf("%d\n", (void *)ft_calloc(nmemb, size));
	printf("%d\n", (void *)calloc(nmemb, size));
}
*/
