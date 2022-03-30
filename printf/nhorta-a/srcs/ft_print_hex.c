/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhorta-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 18:12:44 by nhorta-g          #+#    #+#             */
/*   Updated: 2022/03/30 12:00:13 by nhorta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned int num, const char format)
{
	int	len;

	len = 0;
	if (num >= 16)
	{
		len += ft_print_hex(num / 16, format);
		len += ft_print_hex(num % 16, format);
	}
	else
	{
		if (num <= 9)
			len += ft_putchar_count(num + '0');
		else
		{
			if (format == 'x')
				len += ft_putchar_count(num - 10 + 'a');
			if (format == 'X')
				len += ft_putchar_count(num - 10 + 'A');
		}
	}
	return (len);
}
