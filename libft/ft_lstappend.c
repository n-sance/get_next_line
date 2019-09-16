/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstappend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsance <nsance@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 17:46:32 by nsance            #+#    #+#             */
/*   Updated: 2019/09/10 23:45:47 by nsance           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstappend(t_list **alst, t_list *new)
{
	t_list *temp;

	temp = 0;
	if (!alst || !new)
		return ;
	temp = new;
	if (*alst)
	{
		while ((*alst)->next)
			(*alst) = (*alst)->next;
		(*alst)->next = temp;
	}
	else
		*alst = ft_lstnew(temp->content, temp->content_size);
}
