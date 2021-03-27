#include <unistd.h>

int		check_error_in_base(char *base)
{
	char	*checkbase;
	int		i_check;

	checkbase = base;
	if (*base == 0 || *(base + 1) == 0)
		return (0);
	while (*checkbase)
	{
		if (*checkbase == '+' || *checkbase == '-'
			|| *checkbase <= 31)
			return (0);
		i_check = 1;
		while (*(checkbase + i_check))
		{
			if (*(checkbase + i_check) == *checkbase)
				return (0);
			i_check++;
		}
		checkbase++;
	}
	return (1);
}

int		ft_strlen(char *str)
{
	char	*charptr;
	int		iterator;

	charptr = str;
	iterator = 0;
	while (*charptr != 0)
	{
		iterator++;
		charptr++;
	}
	return (iterator);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int lenbase;
	unsigned int nbr_unsigned;

	if (check_error_in_base(base))
	{
		if (nbr < 0)
		{
			write(1, "-", 1);
			nbr_unsigned = (unsigned int)(-1 * nbr);
		}
		else
			nbr_unsigned = (unsigned int)nbr;
		lenbase = ft_strlen(base);
		if (nbr_unsigned >= lenbase)
		{
			ft_putnbr_base(nbr_unsigned / lenbase, base);
			ft_putnbr_base(nbr_unsigned % lenbase, base);
		}
		else
		{
			write(1, base + nbr_unsigned, 1);
		}
	}
}
#include <stdio.h>

void	ft_putnbr_base(int nbr, char *base);

int main (void)
{
	ft_putnbr_base(40, "0123456789abcdef");
    ft_putnbr_base(31, "0123456789abcdef");
    ft_putnbr_base(15, "01");
    ft_putnbr_base(-15, "0123456789");
    ft_putnbr_base(-16, "01");
    ft_putnbr_base(2147483647, "0123456789abcdef");
    ft_putnbr_base(-2147483648, "0123456789abcdef");
//    ft_putnbr_base("","01234");

    printf("expected:\n28\n1f\n1111\n-15\n-10000\n7fffffff\n-80000000\n");
	
	ft_putnbr_base(42, "poneyvif");
	return (0);
}
