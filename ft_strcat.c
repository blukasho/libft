/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   ft_strcat.c                                                              */
/*                                                                            */
/*   By: blukasho <bodik1w@gmail.com>                                         */
/*                                                                            */
/*   Created: 2018/11/02 09:41:10 by blukasho                                 */
/*   Updated: 2018/11/02 09:49:50 by blukasho                                 */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	size_t dest_len;
	size_t i;

	dest_len = ft_strlen(dest);
	i = -1;
	while (src[++i])
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';
	return (dest);
}
