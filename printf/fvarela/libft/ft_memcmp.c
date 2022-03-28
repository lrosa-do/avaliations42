/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 10:51:19 by marvin            #+#    #+#             */
/*   Updated: 2021/02/18 10:51:19 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t size)
{
	size_t	counter;
	int		c;

	counter = 0;
	while (counter < size)
	{
		c = (int)*(unsigned char *)(str1 + counter)
			- (int)*(unsigned char *)(str2 + counter);
		if (c != 0)
			return (c);
		counter++;
	}
	return (0);
}
