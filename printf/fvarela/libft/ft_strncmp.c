/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvarela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 20:26:22 by fvarela           #+#    #+#             */
/*   Updated: 2020/11/30 20:34:47 by fvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	c1;
	int		c;

	c1 = 0;
	while ((s1[c1] || s2[c1]) && c1 < n)
	{
		c = (int)(unsigned char)s1[c1] - (int)(unsigned char)s2[c1];
		if (c != 0)
			return (c);
		c1++;
	}
	return (0);
}
