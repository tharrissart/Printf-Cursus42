/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thharris <thharris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 00:54:01 by thharris          #+#    #+#             */
/*   Updated: 2025/12/02 03:57:04 by thharris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(const char *s, char sep)
{
	int	i;
	int	count;
	int	word;

	i = 0;
	count = 0;
	word = 0;
	while (s[i])
	{
		if (s[i] != sep && word == 0)
		{
			word = 1;
			count++;
		}
		else if (s[i] == sep)
			word = 0;
		i++;
	}
	return (count);
}

static char	*get_word(const char *s, int start, int end)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc(sizeof(char) * ((end - start) + 1));
	if (!word)
		return (NULL);
	while (start < end)
		word[i++] = s[start++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**result;

	result = malloc(sizeof(char *) * (count_word(s, c) + 1));
	if (!s || !result)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			k = 0;
			while (s[i + k] && s[i + k] != c)
				k++;
			result[j++] = get_word(s, i, (k + i));
			i += k;
		}
		else
			i++;
	}
	result[j] = NULL;
	return (result);
}
/* #include <stdio.h>
int main()
{
	char	*str = " Bonjours tout le monde ";
	char	**tab;
	int 	i;

	i = 0;
	tab = ft_split(str, ' ');
	while(i < 5)
		printf("%s\n", tab[i++]);
	free(tab);
	return (0);
} */