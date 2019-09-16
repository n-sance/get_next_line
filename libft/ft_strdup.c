/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsance <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 17:23:53 by nsance            #+#    #+#             */
/*   Updated: 2019/09/10 23:45:47 by nsance           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char		*copied;
	char		*p;
	int			i;
	int			k;

	i = 0;
	k = 0;
	while (src[i])
		i++;
	if ((copied = (char *)malloc(i + 1)) == NULL)
		return (0);
	p = copied;
	if (!copied)
		return ((char *)NULL);
	while (src[k])
	{
		p[k] = src[k];
		k++;
	}
	p[k] = '\0';
	return (&copied[0]);
}
