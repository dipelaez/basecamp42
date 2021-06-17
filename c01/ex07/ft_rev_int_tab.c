void	ft_rev_int_tab(int *tab, int size)
{
	int	count;
	int	count2;
	int	temp;

	count = 0;
	count2 = size / 2;
	while (size > count2)
	{
		temp = tab[size - 1];
		tab[size - 1] = tab[count];
		tab[count] = temp;
		count++;
		size--;
	}	
}
