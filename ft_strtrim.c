/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irfei <irfei@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 19:36:16 by irfei             #+#    #+#             */
/*   Updated: 2024/11/07 19:51:56 by irfei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_set(char const c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	len;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	if ((ft_strlen(s1) == 0 && ft_strlen(set) == 0) || ft_strlen(s1) == 0)
		return (ft_strdup(""));
	len = ft_strlen(s1) - 1;
	while (s1[i] && is_set(s1[i], set) == 1)
		i++;
	while (s1[len] && is_set(s1[len], set) == 1)
		len--;
	return (ft_substr(s1, i, len - i + 1));
}
