/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 18:39:25 by marvin            #+#    #+#             */
/*   Updated: 2021/03/29 18:39:25 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*nstr;
	size_t	len;
	size_t	c1;

	len = ft_strlen(s1);
	c1 = 0;
	while (s1[c1] && (ft_strchr(set, s1[c1]) != NULL))
		c1++;
	while (len > c1 && ft_strchr(set, s1[len - 1]) != NULL)
		len--;
	nstr = malloc(sizeof(char) * (len - c1) + 1);
	if (!nstr)
		return (NULL);
	ft_strlcpy(nstr, &s1[c1], (len - c1 + 1));
	nstr[(len - c1) + 1] = '\0';
	return (nstr);
}
