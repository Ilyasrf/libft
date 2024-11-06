/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irfei <irfei@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:47:50 by irfei             #+#    #+#             */
/*   Updated: 2024/11/05 17:34:40 by irfei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
	t_list	*tmp;
	t_list	*node;
	void	*new;
	if (!lst || !f)
		return (NULL);                                                                                 
	while(lst != NULL)
	{
		new = f(lst->content);
		node = ft_lstnew(new);
		if (!node)
		{
			ft_lstclear(&tmp, del);  
			return (NULL);
		}
		ft_lstadd_back(&tmp, node);
		lst = lst->next;
	}
	
	return (tmp);
}