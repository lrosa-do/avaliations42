/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_parse_d.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvarela <fvarela@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 15:48:43 by fvarela           #+#    #+#             */
/*   Updated: 2022/03/23 14:17:56 by fvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_printf_parse_d(const char **input, va_list args)
{
	int		decimal;
	char	*str;
	int		len;

	len = 0;
	decimal = va_arg(args, int);
	str = ft_itoa(decimal);
	ft_putstr_fd(str, 1);
	*input = *input + 2;
	len = ft_strlen(str);
	free(str);
	return (len);
}
