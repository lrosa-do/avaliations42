/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efreire- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 14:00:19 by efreire-          #+#    #+#             */
/*   Updated: 2021/12/29 14:00:22 by efreire-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

// BEGIN: Utils
void	ft_putchar_fd(char c, int fd);

void	ft_puthex_fd(unsigned long long n, int is_upper, int fd);

void	ft_putnbr_fd(int n, int fd);

void	ft_putnbr_unsigned_fd(unsigned int n, int fd);

void	ft_putpointer_fd(unsigned long long n, int fd);

void	ft_putstr_fd(char *str, int fd);

size_t	ft_strlen(const char *str);
// END: Utils

// BEGIN: Helpers
int		get_num_len(long long n, int base);

int		get_unsigned_num_len(unsigned long long n, int base);

int		handle_c(char c, int fd);

int		handle_i(int n, int fd);

int		handle_p(unsigned long long pointer, int fd);

int		handle_s(char *str, int fd);

int		handle_u(unsigned int n, int fd);

int		handle_x(unsigned long long n, int is_upper, int fd);
// END: Helpers

int		ft_printf(const char *input, ...);

#endif
