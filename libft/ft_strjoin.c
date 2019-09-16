/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admin <admin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 21:03:52 by admin             #+#    #+#             */
/*   Updated: 2019/09/13 20:49:24 by nsance           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*out;
	size_t	s1_len;
	size_t	s2_len;

	if (s1 && s2)
	{
		s1_len = ft_strlen(s1);
		s2_len = ft_strlen(s2);
		if ((s1_len + s2_len + 1 < s1_len + s2_len) ||
		!(out = (char *)malloc(sizeof(char) * (1 + s1_len + s2_len))))
			return (0);
		ft_strcpy(out, s1);
		ft_strcat(out, s2);
		return (out);
	}
	return (0);
}
