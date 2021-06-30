#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
    int *mat;
    int i;
    
    if (min >= max)
    {
        mat = NULL;
        return (0);
    }
    if (!(mat = malloc(sizeof(*mat) * (max - min))))
        return (-1);
    i = 0;
    while (min < max)
    {
        mat[i] = min;
        i++;
        min++;
    }
    *range = mat;
    return (i);
}
