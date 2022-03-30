/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhorta-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 17:36:22 by nhorta-g          #+#    #+#             */
/*   Updated: 2022/03/30 12:04:58 by nhorta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsigned(unsigned int num)
{
	int	len;

	len = 0;
	if (num >= 10)
	{
		len += ft_print_unsigned(num / 10);
		num = num % 10;
	}
	if (num < 10)
		len += ft_putchar_count(num + '0');
	return (len);
}
