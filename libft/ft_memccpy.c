/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memccpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsance <nsance@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 21:15:23 by nsance            #+#    #+#             */
/*   Updated: 2019/09/10 23:45:47 by nsance           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *to, const void *from, int c, size_t n)
{
	size_t				i;
	unsigned char		*local_to;
	const unsigned char	*local_from;

	local_to = to;
	local_from = from;
	i = 0;
	if (n)
	{
		while (i < n)
		{
			local_to[i] = local_from[i];
			if (local_from[i] == (unsigned char)c)
				return ((void *)local_to + i + 1);
			i++;
		}
	}
	return (0);
}
