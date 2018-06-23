void	*ft_symetric_byte_swap(void	*ptr, int size)
{
	int		i;
	char	*swp;
	char	tmp;

	i = 0;
	swp = (char*)ptr;
	while (i < (size / 2))
	{
		tmp = swp[i];
		swp[i] = swp[size - i - 1];
		swp[size - i - 1] = tmp;
		i++;
	}
	return ((void*)swp);
}
