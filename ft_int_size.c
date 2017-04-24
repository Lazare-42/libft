int		ft_int_size(int nbr)
{
	int size;

	size = 1;
	while (nbr / 10)
	{
		size++;
		nbr /= 10;
	}
	return (size);
}
