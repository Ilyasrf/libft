/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irfei <irfei@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:18:39 by irfei             #+#    #+#             */
/*   Updated: 2024/11/02 18:19:43 by irfei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define LONG_MAX 9223372036854775807L
#define LONG_MIN -9223372036854775808L
#include "libc.h"
#include "libft.h"

int	ft_atoi(char *str)
{
	int	i;
	int	result;
	int	sing;

	result = 0;
	sing = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
		sing = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sing);
}
int	main(void)
{
	printf("%d\n", ft_atoi("-9223372036854775808123"));
	printf("%d\n", atoi("-922337203685477580812"));
}