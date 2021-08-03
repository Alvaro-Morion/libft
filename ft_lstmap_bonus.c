/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 16:00:08 by amorion-          #+#    #+#             */
/*   Updated: 2021/08/03 18:14:39 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nlist;
	t_list	*new;
	t_list	*ptr;

	(void)del;
	if (!lst)
		return (NULL);
	ptr = lst;
	nlist = ft_lstnew(f(lst));
	ptr = ptr->next;
	while (ptr)
	{
		new = ft_lstnew(f(lst));
		ft_lstadd_back(&nlist, new);
		lst = lst->next;
	}
	return (nlist);
}
