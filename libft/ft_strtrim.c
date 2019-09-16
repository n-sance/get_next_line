/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admin <admin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 21:02:54 by admin             #+#    #+#             */
/*   Updated: 2019/09/10 23:45:47 by nsance           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		len;
	int		i;
	char	*out;

	if (!s)
		return (0);
	i = 0;
	while (s[i] != '\0')
		i++;
	len = i;
	i = 0;
	while (ft_isspace(s[i]) && s[i])
		i++;
	while (ft_isspace(s[len - 1]) && len)
		len--;
	if (len == 0)
	{
		out = ft_strnew(1);
	}
	else
		out = ft_strsub(s, i, len - i);
	return (out);
}
