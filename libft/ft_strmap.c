/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsance <nsance@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 20:30:56 by nsance            #+#    #+#             */
/*   Updated: 2019/09/13 18:04:56 by nsance           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*k;
	int		len;
	char	*output;
	char	*temp;

	k = (char *)s;
	if (!s || !f || !*s)
		return (0);
	len = ft_strlen(k);
	if (len + 1 < len || !(output = (char *)malloc(sizeof(char) * (len + 1))))
		return (0);
	temp = output;
	while (*k != '\0')
		if (!(*output++ = f(*k++)))
		{
			free(output);
			return (0);
		}
	*output = '\0';
	return (temp);
}
