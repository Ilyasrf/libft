/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irfei <irfei@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:19:54 by irfei             #+#    #+#             */
/*   Updated: 2024/10/27 14:28:23 by irfei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strchr(const char str[], int c)
{
	int	i;

	i = 0;
	while (*str)
	{
		if (*str == (char)c)
			return ((char *)str);
		str++;
	}
	if (str[i] != (char)c)
		return (NULL);
	return (0);
}

// int	main(void)
// {
// 	char	str[] = "o maywa mo chindayro";
// 	int		c;
// 	char	*result;

// 	c = '\0';
// 	result = ft_strchr(str, c);
// 	if (result != '\0')
// 	{
// 		printf("hahowa jbarto: %s\n", result);
// 	}
// 	else
// 	{
// 		printf("awalo amealem makaynx.\n");
// 	}
// 	return (0);
// }
