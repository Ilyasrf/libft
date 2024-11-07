/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irfei <irfei@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:19:54 by irfei             #+#    #+#             */
/*   Updated: 2024/11/07 19:48:33 by irfei            ###   ########.fr       */
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
