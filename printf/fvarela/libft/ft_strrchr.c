/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 10:43:19 by marvin            #+#    #+#             */
/*   Updated: 2021/02/18 10:43:19 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	counter;
	char	*lstr;

	lstr = (char *)str;
	counter = ft_strlen(lstr) + 1;
	while (counter-- > 0)
	{
		if ((int)lstr[counter] == c)
			return (&lstr[counter]);
	}
	return (NULL);
}
