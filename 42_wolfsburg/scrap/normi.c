int	check_invalid(char *str)
{
	char			*temp;
	int				counter;

	temp = str;
	if (*str == 0 || *(str + 1) == 0)
		return (0);
	while (*temp)
	{
		if (*temp == '+' || *temp == '-' || *temp <= 31)
			return (0);
		counter = 1;
		while (*(temp + counter))
		{
			if (*(temp + counter) == *temp)
				return (0);
			counter++;
		}
		temp++;
	}
	return (1);
}

int	ft_strl(char *str)
{
	char			*temp;
	int				counter;

	temp = str;
	counter = 0;
	while (*temp != 0)
	{
		counter++;
		temp++;
	}
	return (counter);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	num_len;
	unsigned int	temp;

	if (check_invalid(base))
	{
		if (nbr < 0)
		{
			temp = (unsigned int)(-1 * nbr);
			write(1, "-", 1);
		}
		else
			temp = (unsigned int)nbr;
		num_len = ft_strl(base);
		if (temp >= num_len)
		{
			ft_putnbr_base(temp / num_len, base);
			ft_putnbr_base(temp % num_len, base);
		}
		else
		{
			write(1, base + temp, 1);
		}
	}
}

