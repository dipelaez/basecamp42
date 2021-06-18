int	ft_iterative_power(int nb, int power)
{
	int	resp;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	resp = nb;
	while (power > 1)
	{
		resp = resp * nb;
		power--;
	}
	return (resp);
}
