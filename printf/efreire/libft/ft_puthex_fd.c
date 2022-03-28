/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efreire- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 20:19:00 by efreire-          #+#    #+#             */
/*   Updated: 2022/02/19 20:19:02 by efreire-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static int	get_dig_hexa(int to_print, int is_upper)
{
	int	case_increment;
	int	res;

	case_increment = 97;
	if (is_upper)
		case_increment = 65;
	if (to_print < 10)
		res = 48 + to_print;
	else
		res = case_increment + to_print - 10;
	return (res);
}

void	ft_puthex_fd(unsigned long long n, int is_upper, int fd)
{
	int		to_print;
	char	*res;
	int		i;

	if (n == 0)
	{
		ft_putchar_fd('0', fd);
		return ;
	}
	res = (char *)malloc(sizeof(char) * 100);
	if (!res)
		return ;
	i = 99;
	res[i--] = '\0';
	while (n)
	{
		to_print = n % 16;
		n = (n - to_print) / 16;
		res[i--] = get_dig_hexa(to_print, is_upper);
	}
	ft_putstr_fd(res + i + 1, fd);
	free(res);
}
