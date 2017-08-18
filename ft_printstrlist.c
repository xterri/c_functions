/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstrlist.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/17 09:38:32 by thuynh            #+#    #+#             */
/*   Updated: 2017/06/17 13:25:10 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_printstrlist(t_list **lst)
{
	t_list	*trav;

	if (!lst)
		return ;
	trav = *lst;
	while (trav->next)
	{
		ft_putendl((char *)trav->content);
		trav = trav->next;
	}
	if (trav->content)
		ft_putendl((char *)trav->content);
}
