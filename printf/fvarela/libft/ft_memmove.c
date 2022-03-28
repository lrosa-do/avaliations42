/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 13:49:59 by marvin            #+#    #+#             */
/*   Updated: 2021/02/21 13:49:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t size)
{
	size_t	counter;

	if (!(char *)str1 && !(char *)str2)
		return (str1);
	counter = 0;
	if (str2 < str1)
	{
		while (size-- > 0)
			*((char *)str1 + size) = *((char *)str2 + size);
	}
	else
	{
		while (counter < size)
		{
			*((char *)str1 + counter) = *((char *)str2 + counter);
			counter++;
		}
	}
	return (str1);
}
