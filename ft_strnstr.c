/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irfei <irfei@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 10:31:34 by irfei             #+#    #+#             */
/*   Updated: 2024/10/27 15:55:25 by irfei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (needle[0] == '\0')
	{
		return ((char *)haystack);
	}
	while (haystack[i] && i < len)
	{
		while (haystack[i + j] == needle[j] && needle[i] && i + j < len)
		{
			j++;
			if (needle[j] == 0)
			{
				return ((char *)haystack + i);
			}
		}
		i++;
		j = 0;
	}
	return (0);
}
