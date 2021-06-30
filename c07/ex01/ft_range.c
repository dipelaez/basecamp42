#include <stdlib.h>

int *ft_range(int min, int max)
{
    int  *mat;
    int  i;
   
    if (min >= max)
        return (NULL);
    mat = (int *)malloc(sizeof(*mat) * (max - min));
    i = 0;
    while (min < max)
    {
        mat[i] = min;
        i++;
        min++;
    }
    return (mat);
}
