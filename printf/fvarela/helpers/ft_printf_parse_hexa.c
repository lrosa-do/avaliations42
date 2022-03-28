/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_parse_hexa.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvarela <fvarela@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 16:03:57 by fvarela           #+#    #+#             */
/*   Updated: 2022/03/28 19:09:10 by fvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_print_hexa(int c, int u, int *pc)
{
	char	*base;

	base = ft_strdup("0123456789ABCDEF");
	if (u)
	{
		ft_putchar_fd(base[c], 1);
	}
	else
	{
		if (c > 9)
			ft_putchar_fd(ft_tolower(base[c]), 1);
		else
			ft_putchar_fd(base[c], 1);
	}
	*pc += 1;
	free(base);
}

void	ft_putnbr_base_16(unsigned int n, int u, int *pc)
{
	unsigned int	l;

	l = n % 16;
	n = n / 16;
	if (n != 0)
	{
		ft_putnbr_base_16(n, u, pc);
		ft_print_hexa(l, u, pc);
	}
	else
	{
		ft_print_hexa(l, u, pc);
	}
}

void	ft_putnbru_base_16(unsigned long long n, int u, int *pc)
{
	unsigned long long	l;

	l = n % 16;
	n = n / 16;
	if (n != 0)
	{
		ft_putnbru_base_16(n, u, pc);
		ft_print_hexa(l, u, pc);
	}
	else
	{
		ft_print_hexa(l, u, pc);
	}
}

void	ft_printf_parse_hexau(unsigned long long nbr, int u, int *pc)
{
	ft_putnbru_base_16(nbr, u, pc);
}

void	ft_printf_parse_hexa(int nbr, int u, int *pc)
{
	ft_putnbr_base_16(nbr, u, pc);
}
