/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 18:24:20 by marvin            #+#    #+#             */
/*   Updated: 2021/03/29 18:24:20 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	size_t	counter;
	char	*nstr;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	nstr = malloc(sizeof(char) * (len1 + len2) + 1);
	if (!nstr)
		return (NULL);
	ft_strlcpy(nstr, s1, len1 + 1);
	counter = 0;
	while (*(char *)(s2 + counter))
	{
		nstr[len1 + counter] = *(char *)(s2 + counter);
		counter++;
	}
	nstr[len1 + counter] = '\0';
	return (nstr);
}
