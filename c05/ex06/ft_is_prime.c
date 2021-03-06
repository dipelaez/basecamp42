int	ft_is_prime(int nb)
{
	int	i;

	i = 3;
	if (nb <= 1)
		return (0);
	if (nb == 2 || nb == 3)
		return (1);
	if (nb % 2 == 0 || nb % 3 == 0)
		return (0);
	while ((i * i) <= nb)
	{
		if ((nb % i) == 0)
			return (0);
		i = i + 2;
	}
	return (1);
}

#include <stdio.h>
#include <limits.h>

int	main()
{
	printf("%d\n", ft_is_prime(INT_MAX));
	return (0);
}