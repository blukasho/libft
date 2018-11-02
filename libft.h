/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 18:40:24 by blukasho          #+#    #+#             */
/*   Updated: 2018/11/02 18:57:16 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void	ft_bzero(void *s, size_t n);

void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n);
void	*ft_memcpy(void *restrict dst, const void *restrict stc, size_t n);
void	*ft_memset(void *b, int c, size_t len);

char	*ft_strchr(const char *src, int c);
char	*ft_strncat(char *dest, const char *src, size_t n);
char	*ft_strcat(char *dest, const char *src);
char	*ft_strncpy(char *dest, const char *src, size_t n);
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strdup(const char *s1);

size_t	ft_strlcat(char *dest, const char *src, size_t size);
size_t	ft_strlen(const char *s);

int		ft_memcmp(const void *s1, const void *s2, size_t n);

#endif
