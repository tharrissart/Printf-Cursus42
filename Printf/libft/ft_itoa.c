/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thharris <thharris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 20:54:58 by thharris          #+#    #+#             */
/*   Updated: 2025/12/02 03:52:27 by thharris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len_int(long n)
{
	int	i;

	if (n == 0)
		return (1);
	if (n < 0)
		i = 1;
	else
		i = 0;
	while (n)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*new;
	long	nbr;
	int		i;

	nbr = n;
	i = len_int(n);
	new = malloc(sizeof(char) * (i + 1));
	if (!new)
		return (NULL);
	new[i] = '\0';
	if (nbr == 0)
		new[0] = '0';
	if (nbr < 0)
	{
		new[0] = '-';
		nbr = -nbr;
	}
	while (nbr > 0)
	{
		new[--i] = (nbr % 10) + 48;
		nbr = nbr / 10;
	}
	return (new);
}
/* #include <stdio.h>
int main()
{
	char *s = ft_itoa(2);
	printf("%s\n", s);
	free(s);
	return (0);
} */