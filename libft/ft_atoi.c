/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsance <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 09:56:08 by nsance            #+#    #+#             */
/*   Updated: 2019/09/10 23:45:46 by nsance           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned long long	check(unsigned long long result, int positive)
{
	if (9223372036854775807 <= result && positive == 1)
		return (-1);
	if (9223372036854775807 < result && positive == -1)
		return (0);
	else
		return (result * positive);
}

int							ft_atoi(const char *str)
{
	unsigned long long	result;
	int					positive;
	int					i;

	result = 0;
	positive = 1;
	i = 0;
	while (str[i] == 32 || str[i] == 10 || str[i] == 9 || str[i] == 12 ||
	str[i] == 13 || str[i] == 11)
		i++;
	if (str[i] == '-')
	{
		positive = -1;
		i++;
	}
	if (str[i] == '+' && str[i - 1] != '-')
		i++;
	while (str[i] != '\0')
	{
		if ((str[i] - '0') > 9 || ((str[i] - '0') < 0))
			break ;
		result = (result * 10) + (str[i++] - '0');
	}
	return (check(result, positive));
}
