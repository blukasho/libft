/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <bodik1w@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 15:55:21 by blukasho          #+#    #+#             */
/*   Updated: 2018/11/04 16:58:15 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t i;

	i = -1;
	char *res;
	res = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	if (res)
		while (*s2)
		{
			while (*s1)
			{
				res[++i] = *s1;
				s1++;
			}
			res[++i] = *s2;
			s2++;
		}
	return (res);
}
