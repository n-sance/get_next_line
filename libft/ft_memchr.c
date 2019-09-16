/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsance <nsance@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 21:42:23 by nsance            #+#    #+#             */
/*   Updated: 2019/09/10 23:45:46 by nsance           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char		ch;
	const char	*dest;

	ch = c;
	dest = s;
	if (n)
	{
		while (n)
		{
			if (*dest == ch)
				return ((void *)dest);
			n--;
			dest++;
		}
	}
	return (0);
}
