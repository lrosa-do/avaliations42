/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_parse_x.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvarela <fvarela@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 15:49:08 by fvarela           #+#    #+#             */
/*   Updated: 2022/03/23 14:21:27 by fvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_printf_parse_x(const char **input, va_list args, int u)
{
	int	decimal;
	int	pc;

	pc = 0;
	decimal = va_arg(args, int);
	if (decimal == 0)
	{
		ft_putchar_fd('0', 1);
		pc++;
		*input = *input + 2;
		return (pc);
	}
	ft_printf_parse_hexa(decimal, u, &pc);
	*input = *input + 2;
	return (pc);
}
