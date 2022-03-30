/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhorta-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 12:50:59 by nhorta-g          #+#    #+#             */
/*   Updated: 2022/03/30 12:44:06 by nhorta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar_count(char c)
{
	return (write(1, &c, 1));
}

int	ft_putstr_count(const char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (write(1, "(null)", 6));
	while (str[i])
		i++;
	return (write(1, str, i));
}

int	ft_formats(va_list args, const char format)
{
	int	print_length;

	print_length = 0;
	if (format == 'c')
		print_length += ft_putchar_count(va_arg(args, int));
	else if (format == 's')
		print_length += ft_putstr_count(va_arg(args, const char *));
	else if (format == 'p')
		print_length += ft_print_ptr(va_arg(args, unsigned long));
	else if (format == 'd' || format == 'i')
		print_length += ft_print_num(va_arg(args, int));
	else if (format == 'u')
		print_length += ft_print_unsigned(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		print_length += ft_print_hex(va_arg(args, unsigned int), format);
	else if (format == '%')
		print_length += ft_putchar_count('%');
	return (print_length);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		print_length;
	va_list	args;

	va_start(args, str);
	print_length = 0;
	i = -1;
	while (str[++i])
	{
		if (str[i] == '%')
		{
			print_length += ft_formats(args, str[i + 1]);
			i++;
		}
		else
			print_length += write(1, &str[i], 1);
	}
	va_end(args);
	return (print_length);
}
