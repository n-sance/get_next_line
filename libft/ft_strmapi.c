/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsance <nsance@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 20:59:15 by nsance            #+#    #+#             */
/*   Updated: 2019/09/13 21:53:29 by nsance           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*k;
	int		len;
	char	*output;

	i = 0;
	k = (char *)s;
	if (!s || !f || !*s)
		return (0);
	len = ft_strlen(k);
	if ((len > len + 1) || !(output = (char *)malloc(sizeof(char) * (len + 1))))
		return (0);
	while (k[i] != '\0')
	{
		if (!(output[i] = f(i, k[i])))
		{
			free(output);
			return (0);
		}
		i++;
	}
	output[i] = '\0';
	return (output);
}
