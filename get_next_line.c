/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admin <admin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 17:46:01 by admin             #+#    #+#             */
/*   Updated: 2019/09/18 13:56:23 by admin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int			ft_check_line(char **stack, char **line)
{
	char			*tmp_stack;
	char			*tmp;
	int				i;

	i = 0;
	tmp = *stack;
	while (tmp[i] != '\n')
		if (!tmp[i++])
			return (0);
	tmp_stack = &tmp[i];
	*tmp_stack = '\0';
	*line = ft_strdup(*stack);
	*stack = ft_strdup(tmp_stack + 1);
	free(tmp);
	return (1);
}

static	int			ft_read_from_file(int fd, char *heap, char **stack, char **line)
{
	int				ret;
	char			*tmp_stack;

	while ((ret = read(fd, heap, BUFF_SIZE)) > 0)
	{
		heap[ret] = '\0';
		if (*stack)
		{
			tmp_stack = *stack;
			*stack = ft_strjoin(tmp_stack, heap);
			free(tmp_stack);
			tmp_stack = NULL;
		}
		else
			*stack = ft_strdup(heap);
		if (ft_check_line(stack, line))
			break ;
	}
	return (ret > 0 ? 1 : ret);
}

int					get_next_line(int const fd, char **line)
{
	int				ret;
	int				i;
	static char		*stack[MAX_FD];
	char			*buff;

	if (!line || (fd < 0 || fd >= MAX_FD) || (read(fd, stack[fd], 0) < 0) \
		|| !(buff = (char *)malloc(sizeof(char) * BUFF_SIZE + 1)))
		return (-1);
	if (stack[fd])
		if (ft_check_line(&stack[fd], line))
			return (1);
	i = 0;
	ft_bzero(buff, BUFF_SIZE);
	ret = ft_read_from_file(fd, buff, &stack[fd], line);
	free(buff);
	if (ret != 0 || stack[fd] == NULL || stack[fd][0] == '\0')
	{
		if (!ret && *line)
			*line = NULL;
		return (ret);
	}
	*line = stack[fd];
	stack[fd] = NULL;
	return (1);
}