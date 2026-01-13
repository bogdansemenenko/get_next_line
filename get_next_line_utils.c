#include "get_next_line.h"

int ft_strlen(char *str){
    int i;

    i = 0;
    if(!str)
        return 0;
    while(str[i] != 0)
        i++;
    return i;
}

char *ft_strchr(const char *str, int c){
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


char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	len_str;
	size_t			i;

	i = 0;
	len_str = ft_strlen(s);
	if (start > len_str || !s)
	{
		sub = (char *)malloc(1);
		if (!sub)
			return (NULL);
		return (sub[0] = '\0', sub);
	}
	if (start + len > len_str)
		len = len_str - start;
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (NULL);
	while (s[i] && i < len)
	{
		sub[i] = s[start + i];
		i++;
	}
	return (sub[i] = '\0', sub);
}


char	*ft_strjoin(char const *s1, char const *s2){
    int i;
    char *join;
    int len_s1;
    int len_s2;

    if(!s1 && !s2)
        return NULL;
    len_s1 = ft_strlen((char *)s1);
    len_s2 = ft_strlen((char *)s2);
    join = (char *)malloc(sizeof(char) * (len_s1 + len_s2 + 1));
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
        join[len_s1 + i] = s2[i];
        i++;
    }
    return (join[len_s1 + len_s2] = '\0',join);
}
