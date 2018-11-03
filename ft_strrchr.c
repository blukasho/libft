/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <bodik1w@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 09:48:50 by blukasho          #+#    #+#             */
/*   Updated: 2018/11/03 10:20:04 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char *tmp;
	const char *i;

	tmp = s;
	i = s;
	while (*i)
	{
		if (*i == (char) c)
			tmp = i;
		i++;
	}
	if (tmp == s)
		if (*i == (char) c)
			return ((char *) i);
	if (tmp > s)
		return ((char *) tmp);
	return (NULL);
}
