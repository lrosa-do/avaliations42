/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 11:33:19 by marvin            #+#    #+#             */
/*   Updated: 2021/03/08 11:33:19 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*nstr;

	nstr = malloc(sizeof(char) * ft_strlen((char *)str) + 1);
	if (!nstr)
		return (NULL);
	ft_strlcpy(nstr, str, ft_strlen((char *)str) + 1);
	return (nstr);
}
