/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvarela <fvarela@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 07:04:22 by marvin            #+#    #+#             */
/*   Updated: 2022/03/23 12:55:31 by fvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_get_int_size(unsigned int n)
{
	size_t	size;

	size = 1;
	while (n / 10 > 0)
	{
		size++;
		n = n / 10;
	}
	return (size);
}

char	*ft_uitoa(unsigned int n)
{
	char	*str;
	size_t	counter;

	str = malloc(sizeof(char) * (ft_get_int_size(n) + 1));
	if (!str)
		return (NULL);
	counter = ft_get_int_size(n);
	str[counter] = '\0';
	counter--;
	while (n / 10 > 0)
	{
		str[counter--] = n % 10 + '0';
		n = n / 10;
	}
	str[counter--] = n + '0';
	return (str);
}
