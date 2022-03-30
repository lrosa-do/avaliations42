/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_num.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhorta-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 14:16:22 by nhorta-g          #+#    #+#             */
/*   Updated: 2022/03/30 12:00:37 by nhorta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_num(int num)
{
	int	len;

	len = 0;
	if (num == -2147483648)
	{
		len += write (1, &"-2", 2);
		num = 147483648;
	}
	if (num < 0)
	{
		len += ft_putchar_count('-');
		num = -num;
	}
	if (num >= 10)
	{
		len += ft_print_num(num / 10);
		num = num % 10;
	}
	if (num < 10)
		len += ft_putchar_count(num + '0');
	return (len);
}
