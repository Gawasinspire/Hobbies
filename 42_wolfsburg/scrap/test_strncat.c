#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
   	unsigned char temp1, temp2;
    unsigned int counter;

    counter = 0;
//    printf("%d",n);
    while(counter < n)
    {
	       temp1 = *s1++;
		temp2 = *s2++;
		if (temp1 != temp2)
			return temp1 < temp2 ? -1 : 1;
		if (!temp1)
			break;
	counter++;
    }
	return 0;
}

int main()
{
	printf("\nTest01\n");
/*    printf("%d\t",ft_strncmp("asdf","asdf",3));
    printf("%d\t",ft_strncmp("asde","asdf",4));
    printf("%d\t",ft_strncmp("asdg","asdf",4));
   printf("%d\t",ft_strncmp("asdf","asdf",3));
*/    printf("%d\t",ft_strncmp("asde","asdf",3));
    printf("%d\t",ft_strncmp("","",0));
    
    printf("\nExpected\n");
/*    printf("%d\t",strncmp("asdf","asdf",4));
    printf("%d\t",strncmp("asde","asdf",4));
    printf("%d\t",strncmp("asdg","asdf",4));
    printf("%d\t",strncmp("asdf","asdf",3));
*/    printf("%d\t",strncmp("asde","asdf",3));
    printf("%d\t",strncmp("","",0));
    
}
