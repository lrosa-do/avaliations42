/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 07:04:22 by marvin            #+#    #+#             */
/*   Updated: 2021/04/06 07:04:22 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_get_int_size(int n)
{
	size_t	size;
	int		sign;

	sign = 1;
	if (n < 0)
		sign = -sign;
	size = 1;
	while (n / 10 > 0 || n / 10 < 0)
	{
		size++;
		n = n / 10;
	}
	if (sign < 0)
		return (size + 1);
	else
		return (size);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	counter;

	str = malloc(sizeof(char) * (ft_get_int_size(n) + 1));
	if (!str)
		return (NULL);
	counter = ft_get_int_size(n);
	str[counter] = '\0';
	counter--;
	while (n / 10 > 0 || n / 10 < 0)
	{
		if (n % 10 < 0)
			str[counter--] = -(n % 10) + '0';
		else
			str[counter--] = n % 10 + '0';
		n = n / 10;
	}
	if (n < 0)
		n = -n;
	str[counter--] = n + '0';
	if (counter == 0)
		str[counter] = '-';
	return (str);
}
