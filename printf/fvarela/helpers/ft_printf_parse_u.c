/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_parse_u.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvarela <fvarela@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 15:49:04 by fvarela           #+#    #+#             */
/*   Updated: 2022/03/28 19:10:46 by fvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_printf_parse_u(const char **input, va_list args)
{
	unsigned int	decimal;
	char			*str;
	int				len;

	len = 0;
	decimal = va_arg(args, unsigned int);
	str = ft_uitoa(decimal);
	ft_putstr_fd(str, 1);
	*input = *input + 2;
	len = ft_strlen(str);
	free(str);
	return (len);
}
