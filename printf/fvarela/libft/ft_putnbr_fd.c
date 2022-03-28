/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 08:44:30 by marvin            #+#    #+#             */
/*   Updated: 2021/04/06 08:44:30 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int	l;

	l = n % 10;
	n = n / 10;
	if (n != 0)
	{
		ft_putnbr_fd(n, fd);
		if (l < 0)
			l = -l;
		ft_putchar_fd(l + '0', fd);
	}
	else
	{
		if (l < 0)
		{
			l = -l;
			ft_putchar_fd('-', fd);
		}
		ft_putchar_fd(l + '0', fd);
	}
}
