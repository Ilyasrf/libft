/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irfei <irfei@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 22:50:34 by irfei             #+#    #+#             */
/*   Updated: 2024/11/05 12:05:59 by irfei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 
void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if(!lst || !del)
		return;
	del(lst->content);
	free(lst);
}