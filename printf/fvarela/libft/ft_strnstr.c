/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvarela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 00:28:21 by fvarela           #+#    #+#             */
/*   Updated: 2020/12/01 05:11:28 by fvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_do_find(const char *s, const char *find, size_t c, size_t m)
{
	size_t	l;
	size_t	v;
	size_t	o;

	v = 0;
	o = ft_strlen(s);
	l = ft_strlen(find);
	while (c < o && v < l && c < m)
	{
		if ((int)(unsigned char)s[c] != (int)(unsigned char)find[v])
			return (0);
		c++;
		v++;
	}
	if (v == l)
		return (1);
	return (0);
}

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	c;

	c = 0;
	if (ft_strlen(to_find) == 0)
		return ((char *)str);
	while (str[c] && c < len)
	{
		if ((int)(unsigned char)str[c] == (int)(unsigned char)to_find[0])
		{
			if (ft_do_find(str, to_find, c, len))
				return ((char *)str + c);
		}
		c++;
	}
	return (NULL);
}
