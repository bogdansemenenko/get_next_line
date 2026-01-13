#ifndef LINE_H

#define LINE_H
#define BUFFER_SIZE 42

# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
#include  <stdlib.h>


int ft_strlen(char *str);
char *ft_strchr(const char *str, int c);
char	*ft_substr(char const *s, unsigned int start, size_t len);


#endif