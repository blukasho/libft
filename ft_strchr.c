/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <bodik1w@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/02 18:41:21 by blukasho          #+#    #+#             */
/*   Updated: 2018/11/02 19:34:11 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *src, int c)
{
	const char	*s;

	s = src;
	while (s++)
		if (*s == (char) c)
			return ((char *) s);
	if (*s == (char) c)
		return ((char *) s);
	return (NULL);
}
