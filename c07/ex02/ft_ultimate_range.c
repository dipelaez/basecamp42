#include <stdlib.h>

int	ft_ultirangee_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	*range = malloc(sizeof(**range) * (max - min));
	if (*range == 0)
		return (-1);
	i = 0;
	while (min < max)
	{
		*range[i] = min;
		i++;
		min++;
	}
	return (i);
}
