/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compare.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thharris <thharris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 03:12:06 by thharris          #+#    #+#             */
/*   Updated: 2025/12/18 03:31:29 by thharris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_compare(char *c)
{
	int i;
	
	i = 0;
	return (c[i++] == 'c' || c[i++] == 's' || c[i++] == 'p' || c[i++] == 'd' 
		|| c[i++] == 'i' || c[i++] == 'u' || c[i++] == 'x' || c[i++] == 'X' 
		|| c[i++] == '%')
}
int ft_execute(char *str, char c, int nbr)
{
	if (c =='c')
		ft_putchar_fd(&str, 1);
	if (c == 's')
		ft_putstr_fd(*str, 1);
	if (c == 'p')
		return (3);
	if (c == 'd')
		return (4);
	if (c == 'i')
		ft_atoi(*str);
	if (c == 'u')
		return (6);
	if (c == 'x')
		return (7);
	if (c == 'X')
		return (8);
	if (c == '%')
		return (9);
}
int ft_putstring(char *str)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (ft_compare)
	}
}