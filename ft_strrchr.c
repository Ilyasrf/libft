/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irfei <irfei@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 18:47:54 by irfei             #+#    #+#             */
/*   Updated: 2024/10/27 15:56:13 by irfei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrchr(const char *str, int c)
{
	char	*ptr;

	ptr = NULL;
	while (*str)
	{
		if (*str == (unsigned char)c)
			ptr = (char *)str;
		str++;
	}
	if (c == 0)
		return ((char *)str);
	return (ptr);
}

// int	main(void)
// {
// 	char str[] = "o maywa mo chindayro";
// 	int c = 'a';
// 	char *result;

// 	result = ft_strrchr(str, c);
// 	if (result)
// 	{
// 		printf("hahowa jbarto: %s\n", result);
// 	}
// 	else
// 	{
// 		printf("awalo amealem makaynx.\n");
// 	}
// 	return (0);
// }