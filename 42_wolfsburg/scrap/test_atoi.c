#include <stdio.h>
int	ft_atoi(char *str)
{
	int		nombre;
	int		signe;
	char	*charptr;

	nombre = 0;
	signe = 1;
	charptr = str;
	while (*charptr == ' ' || (*charptr >= 9 && *charptr <= 13))
		charptr++;
	while (*charptr == '-' || *charptr == '+')
	{
		if (*charptr == '-')
			signe *= -1;
		charptr++;
	}
	while (*charptr >= '0' && *charptr <= '9')
	{
		nombre *= 10;
		nombre += (int)(*charptr - '0');
		charptr++;
	}
	return (nombre * signe);
}

int	ft_atoi(char *str);

int main(void)
{
	printf("%d\n", ft_atoi(" ---+--+1234ab567"));
	printf("\n\nTest03\n");
	    printf("%d\t", ft_atoi(" ---+--+1234ab567"));
    printf("%d\t", ft_atoi("256a99999"));
    printf("%d\t", ft_atoi("0"));
    printf("%d\t", ft_atoi("15"));
    printf("%d\t", ft_atoi("-25"));
    printf("%d\t", ft_atoi("12345"));
    printf("%d\t", ft_atoi("987654321"));
    printf("%d\t", ft_atoi("-34567"));
    printf("%d\t", ft_atoi("2147483647"));
    printf("%d\n", ft_atoi("-2147483648"));
    printf("expected\n-1234\t256\t0\t15\t-25\t12345\t987654321\t-34567\t2147483647\t-2147483648\n \n");
	
	return (0);
}
