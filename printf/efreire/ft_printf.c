/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efreire- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 14:00:11 by efreire-          #+#    #+#             */
/*   Updated: 2021/12/29 14:00:15 by efreire-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	print_type(va_list args, char type, int fd)
{
	if (type == 'c')
		return (handle_c(va_arg(args, int), fd));
	else if (type == 's')
		return (handle_s(va_arg(args, char *), fd));
	else if (type == 'p')
		return (handle_p(va_arg(args, unsigned long long), fd));
	else if (type == 'i' || type == 'd')
		return (handle_i(va_arg(args, int), fd));
	else if (type == 'u')
		return (handle_u(va_arg(args, unsigned int), fd));
	else if (type == 'x')
		return (handle_x(va_arg(args, long long), 0, fd));
	else if (type == 'X')
		return (handle_x(va_arg(args, long long), 1, fd));
	else if (type == '%')
		return (handle_c((int) '%', fd));
	return (0);
}

int	ft_printf(const char *input, ...)
{
	va_list	args;
	int		fd;
	int		i;
	int		len;

	va_start(args, input);
	fd = 1;
	i = 0;
	len = 0;
	while (input[i])
	{
		if (input[i] == '%')
			len += print_type(args, input[++i], fd);
		else
		{
			ft_putchar_fd(input[i], fd);
			len++;
		}
		i++;
	}
	va_end(args);
	return (len);
}
