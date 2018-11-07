/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <bodik1w@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 23:57:15 by blukasho          #+#    #+#             */
/*   Updated: 2018/11/07 16:16:41 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*word_cp(char const *s, char c)
{
	size_t	i;
	char	*res;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	res = ft_strnew(i);
	i = 0;
	if (res)
	{
		while (s[i] != c && s[i])
		{
			res[i] = s[i];
			i++;
		}
		return (res);
	}
	return (NULL);
}

char	**ft_strsplit(char const *s, char c)
{
	size_t	i;
	char	**res;

	if (s)
	{
		i = ft_count_words(s, c);
		res = (char **)malloc(i * sizeof(char *));
		i = 0;
		if (res)
		{
			while (*s)
			{
				if (*s != c)
				{
					res[i++] = word_cp(s, c);
					while (*s != c && *s)
						s++;
					s--;
				}
				s++;
			}
			return (res);
		}
	}
	return (NULL);
}
