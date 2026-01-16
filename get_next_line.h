#ifndef LINE_H

#define LINE_H
#define BUFFER_SIZE 42

# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
#include  <stdlib.h>


size_t ft_strlen(char *str);
char *ft_strchr(const char *str, int c);
char	*ft_strjoin(char *s1, char *s2);
char	*read_stash(int fd, char *stash);
char    *get_new_line(char *stash);
char	*get_next_line(int fd);
char *get_line(char *stash);

#endif