/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_parse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvarela <fvarela@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 15:49:17 by fvarela           #+#    #+#             */
/*   Updated: 2022/03/23 13:56:57 by fvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_printf_parse_helper(const char **input, va_list args)
{
	int	pc;

	pc = 0;
	if (*(*input + 1) == 'c')
		pc += ft_printf_parse_c(input, args);
	else if (*(*input +1) == 's')
		pc += ft_printf_parse_s(input, args);
	else if (*(*input + 1) == 'p')
		pc += ft_printf_parse_p(input, args);
	else if (*(*input + 1) == 'd' || *(*input + 1) == 'i')
		pc += ft_printf_parse_d(input, args);
	else if (*(*input + 1) == 'u')
		pc += ft_printf_parse_u(input, args);
	else if (*(*input + 1) == 's')
		pc += ft_printf_parse_s(input, args);
	else if (*(*input + 1) == 'x')
		pc += ft_printf_parse_x(input, args, 0);
	else if (*(*input + 1) == 'X')
		pc += ft_printf_parse_x(input, args, 1);
	else if (*(*input + 1) == '%')
		pc += ft_printf_parse_pc(input);
	return (pc);
}

int	ft_printf_parse(const char **input, va_list args)
{
	int	pc;

	pc = 0;
	if (*(*input + 1) == 0)
		++(*input);
	else
		pc += ft_printf_parse_helper(input, args);
	return (pc);
}
