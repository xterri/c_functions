/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/15 20:12:04 by thuynh            #+#    #+#             */
/*   Updated: 2017/06/16 11:46:43 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*ret;
	t_list	*trav;

	if (!lst)
		return (NULL);
	trav = f(lst);
	ret = trav;
	while (lst->next)
	{
		lst = lst->next;
		trav->next = f(lst);
		if (!trav->next)
		{
			free(trav->next);
			return (NULL);
		}
		trav = trav->next;
	}
	return (ret);
}
