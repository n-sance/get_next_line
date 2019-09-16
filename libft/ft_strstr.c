/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsance <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 14:38:28 by nsance            #+#    #+#             */
/*   Updated: 2019/09/10 23:45:47 by nsance           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (!(*to_find))
		return ((char *)&str[0]);
	while (str[j] != '\0')
	{
		i = 0;
		while (str[j + i] == to_find[i])
		{
			i++;
			if (to_find[i] == '\0')
				return ((char*)&str[j]);
		}
		++j;
	}
	return (0);
}
