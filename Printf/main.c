/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thharris <thharris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 23:03:19 by thharris          #+#    #+#             */
/*   Updated: 2025/12/24 00:20:42 by thharris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

int main(void)
{
	size_t size;
	char *ptr = "Bonjours";

	size = ft_printf("Ze ve des %s taille %d %p\n", "Saussures", 42, &ptr);
	printf("Ze ve des %s taille %d %p\n", "Saussures", 42, &ptr);
	printf("%zu", size);
	return (0);
}