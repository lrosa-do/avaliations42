/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvarela <fvarela@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 15:49:34 by fvarela           #+#    #+#             */
/*   Updated: 2022/03/23 13:40:39 by fvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stddef.h>
# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdint.h>
# include "libft/libft.h"

int		ft_printf(const char *input, ...);
int		ft_printf_parse(const char **input, va_list args);
int		ft_printf_parse_c(const char **input, va_list args);
int		ft_printf_parse_s(const char **input, va_list args);
int		ft_printf_parse_p(const char **input, va_list args);
int		ft_printf_parse_d(const char **input, va_list args);
int		ft_printf_parse_u(const char **input, va_list args);
int		ft_printf_parse_x(const char **input, va_list args, int u);
int		ft_printf_parse_pc(const char **input);
void	ft_printf_parse_hexa(int nbr, int u, int *pc);
void	ft_printf_parse_hexau(unsigned long long nbr, int u, int *pc);

#endif
