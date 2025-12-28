/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thharris <thharris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 20:51:30 by thharris          #+#    #+#             */
/*   Updated: 2025/12/24 00:18:21 by thharris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include "libft/libft.h"
# include <stdarg.h>

int		ft_printf(const char *str, ...);
int		put_unsigned_nbr_fd(unsigned int nbr, int fd);
int		basehexa_upper_fd(int nbr, int fd);
int		basehexa_lower_fd(unsigned long nbr, int fd);
int		ft_execute(char c, va_list args, size_t size);
int		pointeur(unsigned long ptr, int fd);

#endif