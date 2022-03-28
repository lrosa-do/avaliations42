/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvarela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 05:14:01 by fvarela           #+#    #+#             */
/*   Updated: 2020/12/03 18:28:57 by fvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	ft_process_start(const char *str, int *i, int *sign)
{
	while (str[*i] == 32 || (str[*i] > 8 && str[*i] < 14))
		(*i)++;
	*sign = 1;
	if (str[*i] == 43 || str[*i] == 45)
	{
		if (str[*i] == 45)
			*sign *= -1;
		(*i)++;
	}
}

int	ft_atoi(const char *str)
{
	long	c;
	int		i;
	int		sign;

	i = 0;
	c = 0;
	ft_process_start(str, &i, &sign);
	while (ft_isdigit((int)str[i]) && ft_isdigit((int)str[i]))
	{
		c = c * 10 + ((int)str[i] - 48);
		if (c < 0)
		{
			if (sign < 0)
				return (0);
			else
				return (-1);
		}
		i++;
	}
	c *= sign;
	return ((int)c);
}
