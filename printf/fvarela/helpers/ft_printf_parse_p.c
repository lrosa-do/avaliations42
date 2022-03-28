/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_parse_p.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvarela <fvarela@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 15:48:52 by fvarela           #+#    #+#             */
/*   Updated: 2022/03/23 14:46:51 by fvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_printf_parse_p(const char **input, va_list args)
{
	unsigned long long		addr;
	int						pc;

	pc = 0;
	addr = va_arg(args, unsigned long long);
	if (addr == 0)
	{
		ft_putstr_fd("0x0", 1);
		pc += 3;
	}
	else
	{
		ft_putstr_fd("0x", 1);
		pc += 2;
		ft_printf_parse_hexau(addr, 0, &pc);
	}
	*input = *input + 2;
	return (pc);
}
