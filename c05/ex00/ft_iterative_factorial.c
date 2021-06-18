int	ft_iterative_factorial(int nb)
{
	int	ft;

	if (nb < 0)
		return (0);
	ft = 1;
	while (nb != 0)
	{
		ft *= nb;
		nb--;
	}
	return (ft);
}

#include <stdio.h>

int	main()
{
	printf("%d\n", ft_iterative_factorial(0));
	return (0);
}