/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irfei <irfei@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:19:54 by irfei             #+#    #+#             */
/*   Updated: 2024/10/25 16:50:35 by irfei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
char *ft_strchr(const char str[], int c)
{
	// char *ptr;
	int i;
	// ptr = (char*)str;
	i = 0;
	while (*str)
	{
		if (*str == (char) c)
			return ((char*)str);
		str++;
	}
	if (str[i] != (char) c)
		return (NULL);
	
	return 0;	
}
int main() {
    char str[] = "o maywa mo chindayro";
    int c = '\0' ;
    char *result;

    result = ft_strchr(str, c);
    if (result != '\0') {
        printf("hahowa jbarto: %s\n", result);
    } else {
        printf("awalo amealem makaynx.\n");
    }

    return 0;
}
