/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsance <nsance@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 17:35:12 by nsance            #+#    #+#             */
/*   Updated: 2019/09/10 23:45:46 by nsance           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *out;

	out = 0;
	if (!(out = (t_list *)malloc(sizeof(t_list))))
		return (0);
	if (!content)
	{
		out->content = 0;
		out->content_size = 0;
	}
	else
	{
		if (!(out->content = (void *)malloc(sizeof(content) * content_size)))
			return (0);
		ft_memcpy(out->content, content, content_size);
		out->content_size = content_size;
	}
	out->next = 0;
	return (out);
}
