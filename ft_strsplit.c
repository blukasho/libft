/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <bodik1w@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 23:57:15 by blukasho          #+#    #+#             */
/*   Updated: 2018/11/05 01:53:50 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_words(char const *s, char c)
{
	size_t res;

	res = 0;
	while (*s)
	{
		if (*s != c)
		{
			while (*s != c && *s)
				s++;
			res++;
		}
		s++;
	}
	return (res);
}

char	*word_cp(char const *s, char c)
{
	size_t	i;
	char	*res;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	res = ft_strnew(--i);
	i = 0;
	if (res)
		while (s[i] != c && s[i])
		{
			res[i] = s[i];
			i++;
		}
	return (res);
}

char	**ft_strsplit(char const *s, char c)
{
	size_t	i;
	char	**res;

	i = count_words(s, c);
	res = (char **)malloc(i * sizeof(char *));
	i = 0;
	if (res)
		while (*s)
		{
			if (*s != c)
			{
				res[i] = word_cp(s, c);
				while (*s != c && *s)
					s++;
				s--;
			}
			i++;
			s++;	
		}
	return (res);
}
