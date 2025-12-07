/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thharris <thharris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 13:18:38 by thharris          #+#    #+#             */
/*   Updated: 2025/11/04 17:48:26 by thharris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return ((c >= 48 && c <= 57) || (c >= 65 && c <= 90)
		|| (c >= 97 && c <= 122));
}
/* #include <stdio.h>
#include <ctype.h>
int main(void)
{
	int c = 48;
	printf("%d\n", ft_isalnum(c));
	printf("%d\n", isalnum(c));
	return (0); 
} */