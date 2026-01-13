#include "get_next_line.h"



char *get_next_line(int fd){

char *out;
static char stash;

if(fd < 0 || BUFFER_SIZE <= 0)
    return (NULL);


return (NULL);
}

char *read_stash(int fd, char *stash)
{
    char *buff;
    ssize_t d;

    buff = malloc(sizeof(char) * (BUFFER_SIZE + 1));
    if(!buff)
        return (NULL);
    d = 1;
    while(!(ft_strchr(stash, '\n')) && d > 0)
    {
        d = read(fd, buff, BUFFER_SIZE);
        if(d == -1)
        {
            free(buff);
            return (NULL);
        }
        buff[d] = '\0';
        buff[d] = ft_strjoin(stash, buff);
    }
    free(buff);
    return(stash);
}

