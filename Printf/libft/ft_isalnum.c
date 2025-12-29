/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thharris <thharris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 13:18:38 by thharris          #+#    #+#             */
/*   Updated: 2025/12/29 22:17:12 by thharris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}


#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int c = 48;
	printf("%d\n", ft_isalnum(c));
	printf("%d\n", isalnum(c));
	return (0); 
}

