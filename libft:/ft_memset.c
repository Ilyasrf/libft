/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irfei <irfei@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 18:26:39 by irfei             #+#    #+#             */
/*   Updated: 2024/10/27 15:35:56 by irfei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)b;
	while (len > 0)
	{
		*ptr = (unsigned char)c;
		ptr++;
		len--;
	}
	return (b);
}

// int main()
// {
//     char str[20] = "Hello, World!";

//     printf("Before ft_memset: %s\n", str);

//     // Use ft_memset to set the first 5 bytes to '*'
//     ft_memset(str, '*', 5000000000);

//     printf("After ft_memset: %s\n", str);

//     return (0);
// }