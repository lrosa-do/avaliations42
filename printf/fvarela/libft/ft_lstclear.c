/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 09:53:09 by marvin            #+#    #+#             */
/*   Updated: 2021/04/06 09:53:09 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*currentlst;

	if (!*lst)
		return ;
	if (!del)
		return ;
	while (*lst)
	{
		del((*lst)->content);
		currentlst = *lst;
		*lst = (*lst)->next;
		free(currentlst);
	}
	*lst = NULL;
}
