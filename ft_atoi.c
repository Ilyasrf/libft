/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irfei <irfei@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 12:34:09 by irfei             #+#    #+#             */
/*   Updated: 2024/11/10 21:10:38 by irfei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int				i;
	unsigned long	result;
	int				sign;

	i = 0;
	result = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		if (result > LONG_MAX && sign == 1)
			return (-1);
		if (result > (unsigned long)LONG_MAX + 1 && sign == -1)
			return (0);
		i++;
	}
	return ((int)(result * sign));
}

// int main()
// {
// 	printf("%d\n", ft_atoi("922337203685477580899992233727"));
// 	printf("%d\n", atoi("9223372036854775808999"));
// 	printf("%d\n", ft_atoi(" 			--+ 92233asa72036854775807"));
// 	printf("%d\n", atoi(" 			--+ 92233asa72036854775807"));
// 	printf("%d\n", ft_atoi("-922337203685499"));
// 	printf("%d\n", atoi("-922337203685499"));
// 	return (0);
// }