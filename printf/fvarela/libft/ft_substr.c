/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 17:30:58 by marvin            #+#    #+#             */
/*   Updated: 2021/03/29 17:30:58 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	counter;
	size_t	sstart;
	size_t	slen;
	char	*nstr;

	slen = ft_strlen(s);
	sstart = ((size_t)start);
	nstr = malloc(sizeof(char) * len + 1);
	if (!nstr)
		return (NULL);
	counter = 0;
	while (s[(counter + sstart)] && (counter < len)
		&& (counter + sstart) < slen)
	{
		nstr[counter] = s[(counter + sstart)];
		counter++;
	}
	nstr[counter] = '\0';
	return (nstr);
}
