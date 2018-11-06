/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <bodik1w@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 22:42:02 by blukasho          #+#    #+#             */
/*   Updated: 2018/11/06 14:56:31 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *nptr)
{
	long long	res;
	int			min;

	min = 0;
	res = 0;
	while ((*nptr >= 1 && *nptr <= 19) || *nptr == 32)
		nptr++;
	if (*nptr == '-')
	{
		min = 1;
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		if (9223372036854775807 - res < *nptr - 48)
		{
			if (!min)
				return (-1);
			else
				return (0);
		}
		res = (res * 10) + (*nptr - 48);
		nptr++;
	}
	if (min == 1)
		res *= -1;
	return ((int) res);
}
