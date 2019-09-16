/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsance <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 13:52:23 by nsance            #+#    #+#             */
/*   Updated: 2019/09/10 23:45:47 by nsance           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	l_dest;

	i = 0;
	if (!size)
		return (ft_strlen(src));
	while (dest[i] != '\0' && i < size)
		i++;
	l_dest = i;
	while (l_dest + 1 < size && src[l_dest - i] != '\0')
	{
		dest[l_dest] = src[l_dest - i];
		l_dest++;
	}
	if (i < size)
		dest[l_dest] = '\0';
	return (ft_strlen(src) + i);
}
