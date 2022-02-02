/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmesnard <hmesnard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 18:05:11 by hmesnard          #+#    #+#             */
/*   Updated: 2021/02/09 00:11:06 by hmesnard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*elem;
	t_list	*elemtemp;

	if (!lst)
		return ;
	elem = *lst;
	while (elem)
	{
		elemtemp = elem->next;
		ft_lstdelone(elem, (*del));
		elem = elemtemp;
	}
	*lst = NULL;
}
