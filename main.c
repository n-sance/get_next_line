
#include "get_next_line.h"

int main(void)
{
	int fd = open("test", O_RDONLY);
	char *line;

	while(get_next_line(fd, &line))
	{
		ft_putendl(line);
		free(line);
	}
	free(line);
	close(fd);
}