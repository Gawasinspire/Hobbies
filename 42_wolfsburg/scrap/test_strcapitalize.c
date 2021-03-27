#include <stdio.h>
 
    int check_non_printables(char temp1)
    {
    if (temp1 < '0')
		return (0);
	else if (temp1 > '9' && temp1 < 'A')
		return (0);
	else if ((temp1 > 'Z' && temp1 < 'a') || (temp1 > 'z'))
		return (0);
	return (1);
    }
    
char     *ft_strcapitalize(char *str)
{
    int flag;
    char *temp;
    
    temp = str;
    flag = 0;
    
    while ( *temp != '0' )
    {
	if (temp == str)
		{
			if (*temp <= 'z' && *temp >= 'a')
				*temp -= 32;
		}
		else if (check_non_printables(*(temp - 1)) == 0)
		{
			if (*temp <= 'z' && *temp >= 'a')
				*temp -= 32;
		}
		else if ((*temp >= 'A') && (*temp <= 'Z'))
		{
			*temp += 32;
		}
	        temp++;
    }
    return (str);

}


int main()
{
	
    char str19[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un\n";
    printf("passing \t%s\n", str19);
    printf("%s\n", ft_strcapitalize(str19));
    
    printf("\nexpected Asdf Qwerty Zxcv 100tis\nAsdf-Qwerty Zxcv 100tis");
    printf("\n");
    
}
