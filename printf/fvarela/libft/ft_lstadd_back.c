/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 09:40:50 by marvin            #+#    #+#             */
/*   Updated: 2021/04/06 09:40:50 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

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
	last = ft_lstlast(*lst);
	last->next = new;
}
