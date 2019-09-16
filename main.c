


# include "libft/libft.h"
# include <stdlib.h>
# include <sys/types.h>
//# include <sys/uio.h>
# include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#define BUFF_SIZE 1
int		checkerror(int fd, char **str, char **line)
{
	if (fd == -1 || line == NULL)
		return (-1);
	if (!*str)
	{
		if (!(*str = (char*)malloc(sizeof(char) * (BUFF_SIZE + 1))))
			return (-1);
	}
	return (0);
}

char	*readline(char *str, int fd)
{
	char		buff[BUFF_SIZE + 1];
	int			ret;

	while ((ret = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[ret] = '\0';
		str = ft_strjoin(str, buff);
	}
	return (str);
}

int		get_next_line(int const fd, char **line)
{
	static char	*str;
	int			i;
	if (*str)
		ft_strcpy(*line, str);
	str = readline(str, fd);
	i = 0;
	if (str[i])
	{
		while (str[i] != '\n' && str[i]) {
			printf("sdfsdf");
			i++;
		}
		if (i == 0)
			(*line) = ft_strdup("");
		else
		{
			(*line) = ft_strsub(str, 0, i);
			str = &str[i + 1];
		}
		return (1);
	}
	else
		(*line) = ft_strdup("");
	return (0);
}
int			main(int ac, char **av) {
	int fd;
	char *line;

	printf("kljlkj");
	line = readline(line, 1);

	printf("%s ", line);
	return(0);
}