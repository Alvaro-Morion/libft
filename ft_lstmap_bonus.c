/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 16:00:08 by amorion-          #+#    #+#             */
/*   Updated: 2021/08/03 18:51:38 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;

	(void)del;
	if (!lst || !f)
		return (NULL);
	newlist = f(lst);
	if (newlist && lst->next)
		newlist->next = ft_lstmap(lst->next, f, del);
	return (newlist);
}
