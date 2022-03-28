/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvarela <fvarela@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 15:49:25 by fvarela           #+#    #+#             */
/*   Updated: 2022/03/23 14:42:53 by fvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "ft_printf.h"

int	ft_printf(const char *input, ...)
{
	va_list	args;
	size_t	c;

	va_start(args, input);
	c = 0;
	while (*input)
	{
		if (*input == '%')
		{
			c += ft_printf_parse(&input, args);
		}
		else
		{
			ft_putchar_fd(*input, 1);
			c++;
			input++;
		}
	}
	va_end(args);
	return (c);
}
