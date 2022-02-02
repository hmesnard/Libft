/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmesnard <hmesnard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 18:05:39 by hmesnard          #+#    #+#             */
/*   Updated: 2021/01/06 18:05:40 by hmesnard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *res;
	t_list *elem;

	if (!lst || !(*f))
		return (NULL);
	if (!(res = ft_lstnew((*f)(lst->content))))
		return (NULL);
	lst = lst->next;
	while (lst)
	{
		if (!(elem = ft_lstnew((*f)(lst->content))))
		{
			ft_lstclear(&res, (*del));
			return (NULL);
		}
		ft_lstadd_back(&res, elem);
		lst = lst->next;
	}
	return (res);
}
