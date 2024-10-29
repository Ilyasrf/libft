/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irfei <irfei@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 15:40:17 by irfei             #+#    #+#             */
/*   Updated: 2024/10/27 15:40:20 by irfei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	length_of_strs(char **strs, int size)
{
	int	counter;
	int	i;
	int	j;

	counter = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			counter++;
			j++;
		}
		i++;
	}
	return (counter);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_cpy(char *str, char *sep, int *index)
{
	int	j;

	j = 0;
	while (sep[j])
	{
		str[*index] = sep[j];
		j++;
		(*index)++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		size_str;
	int		i;
	int		j;
	int		k;

	if (!size)
		return (malloc(1));
	size_str = length_of_strs(strs, size) + (ft_strlen(sep) * (size - 1)) + 1;
	str = (char *)malloc(size_str);
	i = 0;
	k = 0;
	while (i < size)
	{
		if (i)
			ft_cpy(str, sep, &k);
		j = 0;
		while (strs[i][j])
			str[k++] = strs[i][j++];
		i++;
	}
	str[k] = '\0';
	return (str);
}
// int main(void)
// {
//     char *strs[] = {"Hello", "world", "from", "C"};
//     char *sep = ", ";
//     int size = 4;

//     char *result = ft_strjoin(size, strs, sep);
//     if (result)
//     {
//         printf("%s\n", result);
//         free(result);
//     }
//     return (0);
// }
