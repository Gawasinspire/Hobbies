#include <unistd.h>
#include <string.h>
#include <stdio.h>
char *ft_strcpy(char *dest, char *src)
{int counter;
	counter = 0;
	while(src[counter] != '\0')
	{
		dest[counter]=src[counter];
		counter++;
	}
	dest[counter]= '\0';
	return (dest);
}
int main()
{
        char test0[256] = "achi";
	char test1[256] = "achi";
//	char b[] = "";
//	char c[] = "";
	printf("%s",ft_strcpy(test0,"machi"));
	printf("%s", strcpy(test1,"machi"));
     
     	return (0);
}


