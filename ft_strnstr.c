/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irfei <irfei@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 10:31:34 by irfei             #+#    #+#             */
/*   Updated: 2024/11/10 21:24:57 by irfei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hy, const char *nd, size_t len)
{
	size_t	i;
	size_t	s1;

	i = 0;
	if (!hy && len == 0)
		return (NULL);
	s1 = ft_strlen(nd);
	if (s1 == 0)
		return ((char *)hy);
	while (hy[i] && i + s1 <= len)
	{
		if (hy[i] == nd[0])
		{
			if (ft_strncmp(hy + i, nd, s1) == 0)
				return ((char *)(hy + i));
		}
		i++;
	}
	return (NULL);
}
