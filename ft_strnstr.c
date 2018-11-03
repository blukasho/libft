/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <bodik1w@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 12:30:14 by blukasho          #+#    #+#             */
/*   Updated: 2018/11/03 22:33:00 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
** Непонятно как действовать когда искомая строка больше len
*/
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	if (*little == '\0')
		return ((char *) big);
	while (--len && *big)
		if (ft_strncmp(big++, little, ft_strlen(little)) == 0)
			return ((char *) --big);
	return (NULL);
}
