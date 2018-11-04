/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <bodik1w@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 17:18:41 by blukasho          #+#    #+#             */
/*   Updated: 2018/11/04 18:36:45 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	len;
	size_t	beg;
	char	*res;

	beg = 0;
	len = ft_strlen(s);
	while (s[len - 1] == ' ' || s[len - 1] == '\n' || s[len - 1] == '\t')
		--len;
	while (s[beg] == ' ' || s[beg] == '\n' || s[beg] == '\t')
		++beg;
	res = ft_strnew(len - beg);
	if (res)
		while (len-- > beg)
			res[len - beg] = s[len];
	return (res);
}
