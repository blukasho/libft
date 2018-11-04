/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <bodik1w@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 12:17:45 by blukasho          #+#    #+#             */
/*   Updated: 2018/11/04 12:23:27 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(const char *s, char (*f) (char))
{
	char *str;

	str = ft_strnew(ft_strlen(s));
	while (*str)
		*str = f(*s++);
	return (str);
}
