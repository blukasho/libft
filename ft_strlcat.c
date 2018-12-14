/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <bodik1w@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/02 16:18:59 by blukasho          #+#    #+#             */
/*   Updated: 2018/12/14 12:22:29 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t			ft_strlcat(char *dst, const char *src, size_t destsize)
{
	const char	*sr;
	size_t		r;
	size_t		s;
	size_t		d;

	s = ft_strlen(src);
	d = ft_strlen(dst);
	sr = src;
	r = d;
	if (destsize < d)
		return (destsize + s);
	while (destsize - 1 > d && *sr)
	{
		dst[d] = *sr++;
		++d;
	}
	dst[d] = '\0';
	return (s + r);
}
