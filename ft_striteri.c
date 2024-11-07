/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irfei <irfei@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 19:41:59 by irfei             #+#    #+#             */
/*   Updated: 2024/11/07 19:49:14 by irfei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	j;
	size_t	i;

	if (!s || !f)
		return ;
	i = 0;
	j = ft_strlen(s);
	while (i < j)
	{
		f(i, &s[i]);
		i++;
	}
}
