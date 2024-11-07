/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irfei <irfei@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:47:50 by irfei             #+#    #+#             */
/*   Updated: 2024/11/07 19:59:30 by irfei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*tmp;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	head = NULL;
	while (lst)
	{
		content = f(lst->content);
		tmp = ft_lstnew(content);
		if (!tmp)
		{
			del(content);
			ft_lstclear(&head, del);
			return (NULL);
		}
		ft_lstadd_back(&head, tmp);
		lst = lst->next;
	}
	return (head);
}
