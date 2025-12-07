/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thharris <thharris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 13:34:15 by thharris          #+#    #+#             */
/*   Updated: 2025/11/18 14:47:56 by thharris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (!((c < 32) || (c >= 127)));
}
/* #include <stdio.h>
int main(void)
{
	int c = 200;
	printf("%d\n", ft_isprint(c));
	return (0); 
} */