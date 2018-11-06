/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <bodik1w@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/02 16:18:59 by blukasho          #+#    #+#             */
/*   Updated: 2018/11/06 13:05:58 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char * restrict dst,
		const char * restrict src, size_t destsize)
{
	size_t	d;
	size_t	s;

	s = 0;
	d = ft_strlen(dst);
	if (destsize)
	{
		while (d < destsize - 1 && src[s])
			dst[d++] = src[s++];
		dst[d] = '\0';
		if (d >  destsize)
			return (ft_strlen(src) + destsize);
		else
			return (ft_strlen(src));
	}
	return (ft_strlen(src) + (--d));
}
