/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thharris <thharris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 23:03:19 by thharris          #+#    #+#             */
/*   Updated: 2025/12/29 03:19:45 by thharris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

int main(void)
{
	size_t size;
	size_t size2;
	char *ptr = "Bonjours";

	size = ft_printf("Ze ve des %s taille %d, a -25%%, %p\n", "saussures", 42, &ptr);
	size2 = printf("Ze ve des %s taille %d, a -25%%, %p\n", "saussures", 42, &ptr);
	printf("%zu\n", size);
	printf("%zu\n", size2);
	return (0);
}