/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admin <admin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 20:58:54 by admin             #+#    #+#             */
/*   Updated: 2019/09/10 23:45:47 by nsance           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char		*out;
	size_t		i;

	i = 0;
	if (!s)
		return (0);
	if ((len + 1 < len) || !(out = (char *)malloc(sizeof(char) * (len + 1))))
		return (0);
	while (i < len && s[start] != '\0')
	{
		out[i] = s[start];
		i++;
		start++;
	}
	out[i] = '\0';
	return (out);
}
