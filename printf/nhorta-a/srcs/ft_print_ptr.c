/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhorta-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 17:41:10 by nhorta-g          #+#    #+#             */
/*   Updated: 2022/03/30 12:00:29 by nhorta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_ptr(uintptr_t num)
{
	int	len;

	len = 0;
	if (num >= 16)
	{
		len += ft_put_ptr(num / 16);
		len += ft_put_ptr(num % 16);
	}
	else
	{
		if (num <= 9)
			len += ft_putchar_count(num + '0');
		else
			len += ft_putchar_count(num - 10 + 'a');
	}
	return (len);
}

int	ft_print_ptr(unsigned long ptr)
{
	int	print_length;

	print_length = 0;
	print_length += write(1, "0x", 2);
	if (ptr == 0)
		print_length += write(1, "0", 1);
	else
		print_length += ft_put_ptr(ptr);
	return (print_length);
}
