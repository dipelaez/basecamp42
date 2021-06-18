int	ft_find_next_prime(int nb)
{
	int	i;

	i = 3;
	if (nb <= 1)
		return (ft_find_next_prime(nb + 1));
	if (nb == 2 || nb == 3)
		return (nb);
	if (nb % 2 == 0 || nb % 3 == 0)
		return (ft_find_next_prime(nb + 1));
	while ((i * i) <= nb)
	{
		if ((nb % i) == 0)
			return (ft_find_next_prime(nb + 1));
		i = i + 2;
	}
	return (nb);
}
