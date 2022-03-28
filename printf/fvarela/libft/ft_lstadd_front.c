/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 09:19:13 by marvin            #+#    #+#             */
/*   Updated: 2021/04/06 09:19:13 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!*lst && !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	if (!new)
	{
		return ;
	}
	new->next = *lst;
	*lst = new;
}
