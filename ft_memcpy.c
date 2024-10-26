/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irfei <irfei@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 10:11:39 by irfei             #+#    #+#             */
/*   Updated: 2024/10/26 16:17:20 by irfei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void *ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t i;
	i = 0;
	unsigned char *d = (unsigned char *)dst;
	const unsigned char *s = (const unsigned char *)src;
	while (s[i] && i < n)
	{
		d[i] = s[i];
		i++;
	}
	s[i] = '\0';
	return dst;
}

int main()
{
    char src[] = "hello world";
    char *dst = src + 2;
    printf("%s\n",ft_memcpy(dst,src,5));
}
