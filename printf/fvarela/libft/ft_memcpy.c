/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 10:51:19 by marvin            #+#    #+#             */
/*   Updated: 2021/02/18 10:51:19 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t size)
{
	size_t	counter;

	if (!dest && !src)
		return (NULL);
	counter = 0;
	while (counter < size)
	{
		*(char *)(dest + counter) = *(char *)(src + counter);
		counter++;
	}
	return (dest);
}
