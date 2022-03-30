/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhorta-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 11:20:12 by nhorta-g          #+#    #+#             */
/*   Updated: 2022/03/30 11:26:54 by nhorta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_putchar_count(char c);
int	ft_putstr_count(const char *str);
int	ft_formats(va_list args, const char format);
int	ft_printf(const char *str, ...);
int	ft_print_hex(unsigned int num, const char format);
int	ft_put_ptr(uintptr_t num);
int	ft_print_ptr(unsigned long ptr);
int	ft_print_num(int num);
int	ft_print_unsigned(unsigned int num);

#endif
