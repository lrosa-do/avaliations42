/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efreire- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 13:56:22 by efreire-          #+#    #+#             */
/*   Updated: 2022/02/27 13:56:23 by efreire-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	handle_p(unsigned long long pointer, int fd)
{
	ft_putpointer_fd(pointer, fd);
	return (get_unsigned_num_len(pointer, 16) + 2);
}
