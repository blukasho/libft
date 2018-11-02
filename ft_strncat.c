/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   ft_strncat.c                                                             */
/*                                                                            */
/*   By: blukasho <bodik1w@gmail.com>                                         */
/*                                                                            */
/*   Created: 2018/11/02 10:39:00 by blukasho                                 */
/*   Updated: 2018/11/02 10:46:25 by blukasho                                 */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t dest_len;
	size_t i;

	dest_len = ft_strlen(dest);
	i = 0;
	while (i < n && src[i] != 0)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
