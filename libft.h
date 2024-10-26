/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irfei <irfei@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 12:52:52 by irfei             #+#    #+#             */
/*   Updated: 2024/10/26 13:22:30 by irfei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H
#include<unistd.h>
#include<stdio.h>
#include<strings.h>
#include <stdlib.h>

int ft_strlen(char *str);
int ft_strlcat(char *dest, char *src, unsigned int size);
int ft_atoi(char *str);
int isalnum(int c);
int ft_isalpha(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isprint (int c);
int ft_strncmp(char *s1, char *s2, unsigned int n);
int ft_toupper(int c);
int ft_tolower(int c);
void *ft_memset(void *b, int c, size_t len);
void *ft_memcpy(void *dst, const void *src, size_t n);
char *ft_strrchr(const char *str, int c);
int ft_memcmp(const void *s1, const void *s2, size_t n);
void *ft_memchr(const void *s, int c, size_t n);
char *ft_strmapi(const char *s, char (*f)(unsigned int, char));
char	*ft_strdup(char *src);
#endif