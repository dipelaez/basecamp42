char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0' && nb > 0)
	{
		dest[i + j] = src[j];
		j++;
		nb--;
	}
	dest [i + j] = '\0';
	return (dest);
}
