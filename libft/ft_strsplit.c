/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsance <nsance@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 18:26:07 by nsance            #+#    #+#             */
/*   Updated: 2019/09/13 22:47:45 by nsance           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_clnbuff(char ***s)
{
	int i;

	i = 0;
	while (*s[i] != 0)
	{
		free(*s[i]);
		i++;
	}
	free(*s);
	*s = 0;
}

static int		ft_wrd_cnt(const char *str, char c)
{
	int		word;
	int		i;

	i = 0;
	word = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		if (str[i] == c && str[i + 1] != c)
			word++;
		i++;
	}
	if (str[0] != '\0')
		word++;
	return (word);
}

static char		*ft_wrd_splt(const char *str, char c, int *i)
{
	char	*s;
	int		k;

	if (!(s = (char *)malloc(sizeof(s) * (ft_strlen(str)))))
		return (NULL);
	k = 0;
	while (str[*i] != c && str[*i])
	{
		s[k] = str[*i];
		k++;
		*i += 1;
	}
	s[k] = '\0';
	while (str[*i] == c && str[*i])
		*i += 1;
	return (s);
}

char			**ft_strsplit(char const *str, char c)
{
	int		i;
	int		j;
	int		wrd;
	char	**s;

	if (!str || !c)
		return (0);
	i = 0;
	j = 0;
	wrd = ft_wrd_cnt(str, c);
	if (!(s = (char **)malloc(sizeof(s) * (ft_wrd_cnt(str, c) + 1))))
		return (NULL);
	while (str[i] == c && str[i])
		i++;
	while (j < wrd && str[i])
	{
		if (!(s[j] = ft_wrd_splt(str, c, &i)))
		{
			ft_clnbuff(&s);
			return (0);
		}
		j++;
	}
	s[j] = NULL;
	return (s);
}
