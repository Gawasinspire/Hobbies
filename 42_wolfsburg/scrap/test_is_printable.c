#include <stdio.h>
int     ft_str_is_printable(char *str)
{
    while ( *str != 0 )
    {
        if (( *str < 32) || (*str == 127))
        {
            return (0);
        }
        str++;
    }
    return (1);
}

int main(){
	char test06 = '\t';
	char test16[] = "hello\n";
	char test26[] = "dai\t";
	char test36[] =	"\x7fdai";		
	char *testptr06;
	char *testptr16;
	char *testptr26;
	char *testptr36;
	
	testptr06 = test06;
	testptr16 = test16;
	testptr26 = test26;
	testptr36 = test36;

printf("\nTest06\n");
    //int ft_str_is_printable(char *str);
    printf("asdf %d\n", ft_str_is_printable("asdf"));
    //printf("asdF %d\n", ft_str_is_printable("asdF"));
    printf("ASDF %d\n", ft_str_is_printable("ASDF"));
    printf("1234 %d\n", ft_str_is_printable("0"));
    printf("empty %d\n", ft_str_is_printable(""));
    printf("'!@#$^&*()_+-=[]{}:;,./<>?' %d\n", ft_str_is_printable("'!@#$^&*()_+-=[]{}:;,./<>?'"));
  
    printf("%c %d\n",test06 ,ft_str_is_printable(&test06));
    printf("hello\\n %d", ft_str_is_printable(testptr16));
    printf("dai\\t %d", ft_str_is_printable(testptr26));
    printf("\\x7fdai%d", ft_str_is_printable(testptr36));
  
    //  printf("\\x7f %d\n", ft_str_is_printable("\\x7f"));
   
    /*   printf("\\n %d\n", ft_str_is_printable("\\n"));
	
    printf("expected asdf 1\t ASDF 1\t 1234 1 \t  1\n");
    printf("'!@#$^&*()_+-=[]{}:;,./<>?' 1\n");
    printf("expected \\xf0 0\tx7f  0 \\n 0");
    printf("\n");
*/
    return (0);
}
