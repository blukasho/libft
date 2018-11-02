/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   ft_strcpy.c                                                              */
/*                                                                            */
/*   By: blukasho <bodik1w@gmail.com>                                         */
/*                                                                            */
/*   Created: 2018/11/02 08:13:19 by blukasho                                 */
/*   Updated: 2018/11/02 08:20:20 by blukasho                                 */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	size_t i;

	i = -1;
	while (src[++i])
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
