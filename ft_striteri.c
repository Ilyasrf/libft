/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irfei <irfei@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 19:41:59 by irfei             #+#    #+#             */
/*   Updated: 2024/10/31 19:50:08 by irfei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	char *result;
	size_t len;
	unsigned int i;
	if (!s)
		return ;
	len = ft_strlen(s);
	result = (char *)malloc(sizeof(char) * (len + i));
	if (!result)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
	result[i] = '\0';
	return ;
}