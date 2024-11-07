/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irfei <irfei@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 19:59:37 by irfei             #+#    #+#             */
/*   Updated: 2024/11/07 19:40:52 by irfei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_number_size(int number)
{
	unsigned int	size;

	if (number == 0)
		return (1);
	size = 0;
	if (number < 0)
	{
		size++;
		number = -number;
	}
	while (number != 0)
	{
		number = number / 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	int		i;
	int		len;
	char	*result;
	long	number;

	number = n;
	len = ft_number_size(n);
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	result[len] = '\0';
	if (number < 0)
	{
		result[0] = '-';
		number = -number;
	}
	i = len - 1;
	while (number >= 10)
	{
		result[i] = ((number % 10) + '0');
		number = number / 10;
		i--;
	}
	result[i] = (number + '0');
	return (result);
}
