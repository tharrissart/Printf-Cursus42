/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thharris <thharris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 23:03:19 by thharris          #+#    #+#             */
/*   Updated: 2026/01/16 09:58:27 by thharris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>
int main(void)
{
	char *ptr = "Bonjours";
	char *ptrnull = NULL;
	
	ft_printf("%d\n", ft_printf("avec ft_printf : Ze ve des %s ", "saussures, char"));
	printf("%d\n", ft_printf("avec    printf : Ze ve des %s ", "saussures, char"));
	ft_printf("Taille %d ", 45);
	ft_printf("a l'adresse %p\n", &ptr);
	ft_printf("ft_printf : l'adresse de *ptrnull = %p\n", ptrnull);
	printf("printf : l'adresse de *ptrnull = %p\n", ptrnull);
	ft_printf("%c ", '&');
	ft_printf("le prix est de %i$\n", 150);
	ft_printf("%u?!!!\n", 150);
	ft_printf("a -25%%\n");
	ft_printf("ft_printf :BaseHexa %x\n", 45874651);
	ft_printf("ft_printf :BaseHexa %x\n", 0);
	printf("printf :BaseHexa %x\n", 0);
	ft_printf("ft_printf :BaseHexa %x\n", 16);
	printf("printf : BaseHexa %x\n", 16);
	ft_printf("ft_printf :BaseHexa %X\n", 45698465);
	printf("printf :BaseHexa %X\n", 45698465);
	return (0);
}