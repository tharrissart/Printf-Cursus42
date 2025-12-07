/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thharris <thharris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 20:56:45 by thharris          #+#    #+#             */
/*   Updated: 2025/11/25 00:55:40 by thharris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
}
/* #include <stdio.h>

void	uppercase(unsigned int i, char *c)
{
	(void)i;

	*c = (char)ft_toupper(*c);
}
int main()
{
	char s[] = "Bonjours";
	ft_striteri(s, uppercase);
	printf("%s\n", s);
} */