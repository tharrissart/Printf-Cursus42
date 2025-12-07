/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thharris <thharris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 13:06:08 by thharris          #+#    #+#             */
/*   Updated: 2025/11/04 10:58:01 by thharris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c <= 90 && c >= 65) || (c >= 97 && c <= 122));
}
/* #include <stdio.h>
int main(void)
{
	int c = 70;
	printf("%d\n", ft_isalpha(c));
	return (0); 
} */