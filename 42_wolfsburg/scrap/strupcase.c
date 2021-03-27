#include <stdio.h>
char     *ft_strupcase(char *str)
{
        char *temp;
        temp = str;

 while ( *temp != '0' )
        {

            if (( *temp >= 'a') && (*temp <= 'z'))
        {

            *temp = *temp - 32;

        }
        temp++;
    }

   return (str);
}

int main()
{
    char str07[] = "asdf qWeRtY ZXCV";
    printf("passing \t%s\n", str07);

    printf("%s", ft_strupcase(str07));

    printf("\nexpected ASDF QWERTY ZXCV");
   return (0);
	
}
