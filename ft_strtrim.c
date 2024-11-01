/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irfei <irfei@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 19:36:16 by irfei             #+#    #+#             */
/*   Updated: 2024/10/31 00:01:38 by irfei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* This function checks if character c exists in set
** Returns 1 if found, 0 if not found */
static int	to_trim(const char *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
		{
			return (1);
		}
		return (0);
	}
}
/* This function creates a new string from s1 starting at 'start' index
** and ending at 'end' index (inclusive) */

static char	*new_str(const char *s1, size_t start, size_t end)
{
	char	*new_str;
	size_t	i;

	new_str = (char *)malloc(sizeof(char) * (end - start + 2));
	i = 0;
	if (!new_str)
	{
		return (NULL);
	}
	while (start <= end)
	{
		new_str[i] = s1[start];
		i++;
		start++;
	}
	new_str[i] = '\0';
	return (ft_strdup(new_str));
}

char	*ft_strtrim(const char *s1, const char *set)
{
	int i;
	int j;
	i = 0;
	char *s = (char *)s1;
	j = ft_strlen(s) - 1;
	if (!s || !set)
	{
		return (NULL);
	}
	if (ft_strlen(s) == 0)
	{
		return (ft_strdup(""));
	}
	while (to_trim(set, s[i]) && s[i])
	{
		i++;
	}
	while (to_trim(set, s[j] && j >= 0))
	{
		j--;
	}
	if (i < j)
	{
		return (new_str(s, i, j));
	}
	return (ft_strdup(""));
}