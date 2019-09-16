/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admin <admin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 21:28:28 by admin             #+#    #+#             */
/*   Updated: 2019/09/10 23:45:46 by nsance           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_int_len(long long i)
{
	int	out;

	out = 0;
	if (i <= 0)
	{
		out++;
		i = i * -1;
	}
	while (i > 0)
	{
		i = i / 10;
		out++;
	}
	return (out);
}

char		*ft_itoa(int i)
{
	char	*out;
	int		len;
	int		s;

	if (i == -2147483648)
		return (ft_strdup("-2147483648"));
	s = (i < 0 ? 1 : 0);
	len = ft_int_len(i);
	if (!(out = (char *)malloc(sizeof(char) * (len + 1))))
		return (0);
	if (s)
		i = i * -1;
	out[len--] = '\0';
	while (len >= 0)
	{
		out[len] = i % 10 + '0';
		i = i / 10;
		len--;
	}
	if (s)
		out[0] = '-';
	return (out);
}
