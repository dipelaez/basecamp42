int	ft_sqrt(int nb)
{
	int	odd;
	int	result;

	odd = 1;
	result = 0;
	while (nb > 0)
	{
		nb = nb - odd;
		result++;
		odd += 2;
	}
	if (nb < 0)
		return (0);
	return (result);
}
