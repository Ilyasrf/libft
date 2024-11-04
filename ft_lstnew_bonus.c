/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew-bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irfei <irfei@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 19:44:05 by irfei             #+#    #+#             */
/*   Updated: 2024/11/04 22:34:01 by irfei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
t_list *ft_lstnew(void *content)
{
	t_list *new;
	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return(new);

	
}