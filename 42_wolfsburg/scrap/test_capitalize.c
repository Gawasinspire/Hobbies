#include <unistd.h>
#include <stdio.h>


/*
 char     *ft_strcapitalize(char *str)
{
    int flag;
    
    flag = 0;
    while ( *str != 0 )
    {
        if ( (( *str >= 32) && ( *str <= 47)) || (( *str >= 58) && ( *str <= 64)) || (( *str >= 133 ) && ( *str <= 136 )) )  
        {
            flag = 1;
        }   
         
        if (( *str >= 'a') && (*str <= 'z') && (flag ==1))
        {
            *str = *str - 32; 
            flag = 0;
            return (str);
        }
        else {
            flag = 0;
        }
        str++;
    }
    return (str);
}
*/

char    *ft_strlowcase(char *str)
{
  int   counter;

  counter = 0;
  while (str[counter] != '\0')
    {
      if (str[counter] > 64 && str[counter] < 91)
        str[counter] = str[counter] + 32;
      counter = counter + 1;
    }
  return str;
}

char	*ft_strcapitalize(char *str)
{
  int	counter;
  int	flag;

  counter = 0;
  flag = 1;
  ft_strlowcase(str);
  while (str[counter] != '\0')
    {
      if (str[counter] > 96 && str[counter] < 123)
	{
	  if (flag == 1)
	    str[counter] = str[counter] - 32;
	  flag = 0;
	}
      else if (str[counter] > 47 && str[counter] < 58)
	flag = 0;
      else
	flag = 1;
      counter = counter + 1;
    }
  return str;
}

int main(){
 printf("\nTest09\n");
    char str19[] = "asdf qWeRtY ZXCV 100TIS\n";
    printf("%s", ft_strcapitalize(str19));
    char str29[] = "asdf-qWeRtY ZXCV 100TIS";
    printf("%s", ft_strcapitalize(str29));	//ft_
		
    printf("\nexpected Asdf Qwerty Zxcv 100tis\nAsdf-Qwerty Zxcv 100tis");
    char str39[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un\n";
    printf("passing \t%s\n", str39);
    printf("%s\n", ft_strcapitalize(str39));
	
    return 0;
}
