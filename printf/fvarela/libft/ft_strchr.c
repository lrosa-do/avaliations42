/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 10:39:34 by marvin            #+#    #+#             */
/*   Updated: 2021/02/18 10:39:34 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	size_t	counter;
	char	*lstr;

	counter = 0;
	lstr = (char *)str;
	while (counter < ft_strlen(str) + 1)
	{
		if ((int)lstr[counter] == c)
			return (&lstr[counter]);
		counter++;
	}
	return (NULL);
}
