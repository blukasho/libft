/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   ft_strncpy.c                                                             */
/*                                                                            */
/*   By: blukasho <bodik1w@gmail.com>                                         */
/*                                                                            */
/*   Created: 2018/11/02 08:52:15 by blukasho                                 */
/*   Updated: 2018/11/05 08:52:19 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t i;
	
	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}
