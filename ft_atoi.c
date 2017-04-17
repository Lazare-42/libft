int atoi(const char *nptr)
{
	int i;
	int sign;
	int nbr;

	nbr = 0;
	sign = 1;
	i = 0;
	while (nptr[i] < 32)
		i++;
	if (nptr[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (nptr[i] == '+')
		i++;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		nbr = nptr[i] + 48 + nbr * 10;
		i++;
	}
	return (nbr * sign);
}
