/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsance <nsance@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 17:47:47 by nsance            #+#    #+#             */
/*   Updated: 2019/09/13 23:03:07 by nsance           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_delcontent(void *cnt, size_t s)
{
	cnt = 0;
	s = 0;
}

t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*out;
	t_list	*buff;

	if (!lst || !f)
		return (0);
	buff = f(lst);
	out = buff;
	lst = lst->next;
	while (lst)
	{
		if (!(buff->next = f(lst)))
		{
			ft_lstdel(&out, ft_delcontent);
			return (0);
		}
		buff = buff->next;
		lst = lst->next;
	}
	return (out);
}
