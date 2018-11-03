/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <bodik1w@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 22:42:02 by blukasho          #+#    #+#             */
/*   Updated: 2018/11/03 23:59:04 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *nptr)
{
	size_t	res;
	int		min;

	min = 0;
	res = 0;
	while (*nptr)
	{
		while (*nptr >= '0' && *nptr <= '9')
		{
			if (*(nptr - 1) == '-')
				min = 1;
			res = (res * 10) + (*nptr - 48);
			nptr++;
		}
		nptr++;
	}
	if (min == 1)
		res *= -1;
	return ((int) res);
}
