/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_x.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efreire- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 13:58:37 by efreire-          #+#    #+#             */
/*   Updated: 2022/02/27 13:58:43 by efreire-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	handle_x(unsigned long long n, int is_upper, int fd)
{
	n %= 4294967296;
	ft_puthex_fd(n, is_upper, fd);
	return (get_unsigned_num_len(n, 16));
}
