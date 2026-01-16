#include "get_next_line.h"

char	*read_stash(int fd, char *stash)
{
	char	*buff;
	ssize_t	rd;

	buff = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buff)
		return (NULL);
	rd = 1;
	while (!(ft_strchr(stash, '\n')) && rd > 0)
	{
		rd = read(fd, buff, BUFFER_SIZE);
		if (rd == -1)
		{
			free(buff);
			return (NULL);
		}
		buff[rd] = '\0';
		stash = ft_strjoin(stash, buff);
	}
	free(buff);
	return (stash);
}
char	*get_next_line(int fd)
{
	char		*out;
	static char	*stash;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
    stash = read_stash(fd, stash);
    if(!stash)
        return(NULL);
    out = get_line(stash);
    //printf("LINE = [%s]\n", out);
    stash = get_new_line(stash);
	return (out);
}
