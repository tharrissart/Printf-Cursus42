/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thharris <thharris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 23:03:19 by thharris          #+#    #+#             */
/*   Updated: 2025/12/29 21:20:21 by thharris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int main(void)
{
	char *ptr = "Bonjours";

	ft_printf("Ze ve des %s ", "saussures");
	ft_printf("Taille %d ", 45);
	ft_printf("a l'adresse %p ", &ptr);
	ft_printf("%c ", '&');
	ft_printf("le prix est de %i$\n", 150);
	ft_printf("%u?!!!\n", 150);
	ft_printf("a -25%%\n");
	ft_printf("BaseHexa %x\n", 45874651);
	ft_printf("BaseHexa %X\n", 45698465);
	return (0);
}