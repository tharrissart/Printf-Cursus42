/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thharris <thharris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 22:23:24 by thharris          #+#    #+#             */
/*   Updated: 2025/12/29 02:25:30 by thharris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *str, ...)
{
	unsigned int	i;
	size_t			size;
	va_list			args;

	va_start(args, str);
	size = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
			size = ft_execute(str[++i], args, size);
		else
		{
			if (str[i])
			{
				ft_putchar_fd(str[i], 1);
				size++;
			}
		}
		i++;
	}
	return (size);
}
