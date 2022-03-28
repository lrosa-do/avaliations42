/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvarela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 01:29:27 by fvarela           #+#    #+#             */
/*   Updated: 2020/11/30 17:26:40 by fvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	counter;

	counter = 0;
	if (size != 0)
	{
		while (src[counter] && counter < (size - 1))
		{
			dest[counter] = src[counter];
			counter++;
		}
		dest[counter] = 0;
		while (src[counter])
			counter++;
		return (counter);
	}
	else
	{
		while (src[counter])
			counter++;
		return (counter);
	}
}
