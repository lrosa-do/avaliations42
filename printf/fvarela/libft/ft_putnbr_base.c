/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvarela <fvarela@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 15:47:36 by fvarela           #+#    #+#             */
/*   Updated: 2022/03/22 15:47:41 by fvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_base_16(int n)
{
	int		l;
	char	*base;

	base = ft_strdup("0123456789ABCDEF");
	l = n % 16;
	n = n / 16;
	if (n != 0)
	{
		ft_putnbr_base_16(n);
		if (l < 0)
			l = -l;
		ft_putchar_fd(base[l], 0);
	}
	else
	{
		if (l < 0)
		{
			l = -l;
			ft_putchar_fd('-', 0);
		}
		ft_putchar_fd(base[l], 0);
	}
}

void	ft_putnbr_base(int nbr, int base)
{
	if (base == 16)
		ft_putnbr_base_16(nbr);
}
