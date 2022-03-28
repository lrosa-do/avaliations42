/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvarela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 02:53:25 by fvarela           #+#    #+#             */
/*   Updated: 2020/12/01 10:30:16 by fvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_size;
	size_t	src_size;
	size_t	counter;

	dest_size = ft_strlen(dest);
	if (dest_size > size)
		dest_size = size;
	src_size = ft_strlen(src);
	counter = 0;
	while (src[counter] && (dest_size + counter + 1) < size)
	{
		dest[dest_size + counter] = src[counter];
		counter++;
	}
	if (dest_size < size)
		dest[dest_size + counter] = '\0';
	return (dest_size + src_size);
}
