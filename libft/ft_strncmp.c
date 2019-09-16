/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsance <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 17:24:35 by nsance            #+#    #+#             */
/*   Updated: 2019/09/10 23:45:47 by nsance           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	ch1;
	unsigned char	ch2;

	if (n == 0)
		return (0);
	ch1 = *s1;
	ch2 = *s2;
	while (ch1 == ch2 && ch1 && n--)
	{
		ch1 = *s1++;
		ch2 = *s2++;
	}
	return (ch1 - ch2);
}
