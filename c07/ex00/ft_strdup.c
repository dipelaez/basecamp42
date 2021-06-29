#include <stdlib.h>

char *ft_strdup(char *src)
{
    int len;
    int i;
    char    *ptr;
    
    len = 0;
    while (src[len])
        len++;
    ptr = (char *)malloc(sizeof(*src) * (len + 1));
    i = 0;
    while (i < len)
    {
        ptr[i] = src[i];
        i++;
    }
    return (ptr);
}
