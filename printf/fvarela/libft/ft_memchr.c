/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 13:33:28 by marvin            #+#    #+#             */
/*   Updated: 2021/02/21 13:33:28 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *src, int c, size_t size)
{
	size_t	counter;

	counter = 0;
	while (counter < size)
	{
		if ((int)*(char *)(src + counter) == c)
			return ((void *)(src + counter));
		counter++;
	}
	return (NULL);
}
