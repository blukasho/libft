/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <bodik1w@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 10:27:33 by blukasho          #+#    #+#             */
/*   Updated: 2018/11/03 11:38:32 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *havstack, const char *needle)
{
	while (*havstack)
		if (!ft_strcmp(havstack++, needle))
			return ((char *) havstack);	
	return (NULL);
}
