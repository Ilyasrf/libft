/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irfei <irfei@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 10:11:39 by irfei             #+#    #+#             */
/*   Updated: 2024/11/07 19:44:56 by irfei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	*str2;

	if (dst == src)
		return (dst);
	str = (unsigned char *)src;
	str2 = (unsigned char *)dst;
	i = 0;
	while (i < n)
	{
		str2[i] = str[i];
		i++;
	}
	return (dst);
}
