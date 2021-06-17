void	ft_sort_int_tab(int *tab, int size)
{
	int	count;
	int	temp;
	int	lenght;
	int	count2;

	count = 0;
	while (count < size - 1)
	{
		lenght = size - 1;
		count2 = count + 1;
		while (lenght > 0)
		{
			if (tab[count] > tab[count2] && count2 < size)
			{
				temp = tab[count2];
				tab[count2] = tab[count];
				tab[count] = temp;
			}
			count2++;
			lenght--;
		}
		count++;
	}
}
