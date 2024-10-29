/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irfei <irfei@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 12:03:21 by irfei             #+#    #+#             */
/*   Updated: 2024/10/29 19:55:59 by irfei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	i = 0;
	if (!s)	
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	str = ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

int main() {
    const char *s = "Hello, World!";
    char *result;

    // Test 1 : Extraction normale
    result = ft_substr(s, 7, 5);
    printf("Test 1 (Normal): \"%s\"\n", result);
    free(result);

    // Test 2 : Début en dehors de la chaîne
    result = ft_substr(s, 20, 5);
    printf("Test 2 (Start out of bounds): \"%s\"\n", result);
    free(result);

    // Test 3 : Extraction avec `len` plus grand que la fin de `s`
    result = ft_substr(s, 7, 20);
    printf("Test 3 (Len larger than end of string): \"%s\"\n", result);
    free(result);

    // Test 4 : `len` est 0
    result = ft_substr(s, 7, 0);
    printf("Test 4 (Len is zero): \"%s\"\n", result);
    free(result);

    // Test 5 : `s` est une chaîne vide
    result = ft_substr("", 0, 5);
    printf("Test 5 (Empty string): \"%s\"\n", result);
    free(result);

    return 0;
}
