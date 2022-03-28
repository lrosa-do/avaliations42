/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 14:34:30 by marvin            #+#    #+#             */
/*   Updated: 2021/02/21 14:34:30 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t size)
{
	size_t			counter;
	unsigned char	*dst;
	unsigned char	*ssrc;

	dst = (unsigned char *)dest;
	ssrc = (unsigned char *)src;
	counter = 0;
	while (counter < size)
	{
		dst[counter] = ssrc[counter];
		if (dst[counter] == (unsigned char)c)
			return (&dst[counter + 1]);
		counter++;
	}
	return (NULL);
}
