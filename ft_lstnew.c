/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 18:33:21 by blukasho          #+#    #+#             */
/*   Updated: 2018/11/07 20:13:40 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*res;

	if (content)
	{
		res = (t_list *)malloc(sizeof(t_list));
		if (res)
		{
			if (!content)
			{
				res->content = NULL;
				res->content_size = 0;
				return (res);
			}
			res->content = malloc(content_size);
			if (res->content)
			{
				res->content = ft_memcpy(res->content, content, content_size);
				res->content_size = content_size;
				res->next = NULL;
				return (res);
			}
		}
	}
	return (NULL);
}
