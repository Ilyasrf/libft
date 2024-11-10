/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irfei <irfei@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:09:15 by irfei             #+#    #+#             */
/*   Updated: 2024/11/10 21:12:34 by irfei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
// int main()
// {
// 	char str[] = "Hello, World!";
// 	printf("Before ft_bzero: %s\n", str);

// 	ft_bzero(str, 5); // Zero out the first 5 bytes

// 	printf("After ft_bzero: ");
// 	int i;
// 	i = 0;
// 	while (i < sizeof(str) - 1)
// 	{
// 		if (str[i] == '\0')
// 			printf("\\0");
// 		else
// 			printf("%c", str[i]);
// 	}

// 	return (0);
// }