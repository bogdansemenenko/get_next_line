#include "get_next_line.h"

size_t ft_strlen(char *str)
{
    size_t i;

    i = 0;
    if(!str)
        return 0;
    while(str[i] != 0)
        i++;
    return i;
}

char *ft_strchr(const char *str, int c)
{
    int i;

    i = 0;
    if(!str)
        return NULL;
    while(str[i] != 0){
        if(str[i] == (unsigned char)c)
            return ((char *)&str[i]);
        i++;
    }
    if((unsigned char)c ==  '\0')
        return ((char *)&str[i]);

    return NULL;
}

char	*ft_strjoin(char *s1, char *s2)
{
    size_t i;
    char *join;
    
    if(!s1){
        s1 = (char *)malloc(sizeof(char) * 1);
        s1[0] = '\0';
    }
    
    if(!s1 || !s2)
        return NULL;
    join = (char *)malloc(sizeof(char) * (ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1));
    if(!join)
        return NULL;
    i = 0;
    while(s1[i] != 0)
    {
        join[i] = s1[i];
        i++;
    }
    i = 0;
    while(s2[i] != 0)
    {
        join[ft_strlen((char *)s1) + i] = s2[i];
        i++;
    }
    return (join[ft_strlen((char *)s1) + ft_strlen((char *)s2)] = '\0',join);
}
char *get_line(char *stash)
{
    int i;
    char *str;

    i = 0;
    if(!stash || !stash[i])
        return (NULL);
    while(stash[i] && stash[i] != '\n')
        i++;
    str = (char *)malloc(sizeof(char) * (i + 2));
    if(!str)
        return(NULL);
    i = 0;
    while(stash[i] && stash[i] != '\n')
    {
        str[i] = stash[i];
        i++;
    }
    if(stash[i] == '\n')
        str[i++] = '\n';
    return(str[i] = '\0', str);
}

char    *get_new_line(char *stash)
{
    int len;
    int i;
    char *str;

    len = 0;
   
    while(stash[len] && stash[len] != '\n')
        len++;
    if(!stash || !stash[len])
    {
        free(stash);
        return(NULL);
    }
    str = (char *)malloc(sizeof(char) * (ft_strlen(stash) - len + 1));
    if(!str)
        return (NULL);
    i = 0;
    len++;
    while(stash[len])
        str[i++] = stash[len++];
    free(stash);
    return(str[i] = '\0', str);
}