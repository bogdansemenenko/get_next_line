#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>
int main(int argc, char **argv){

//printf("%d\n",ft_strlen(argv[1]));

//printf("%s\n", ft_substr(argv[1], atoi(argv[2]), atoi(argv[3])));
    int fd;
	char *line;

	fd = open("test.txt", O_RDONLY);
	if (fd < 0)
		return (1);

	while ((line = get_next_line(fd)))
	{
		printf("%s", line);
		free(line);
	}
	close(fd);
	return (0);
}

