#include <stdio.h>
#include <string.h>
int strlength(char *temp)
{
int counter;
counter = 0;

while(*temp != '\0')
{
	temp++;
	counter++;
}
return (counter);

}
int strlcat(char *dst,char *src,int siz)
{
	char *temp1 = dst;
	char *temp2 = src;
	int n = siz;
	int dlen;
	while (n-- != 0 && *temp1 != '\0')
		temp1++;
	dlen = temp1 - dst;
	n = siz - dlen;

	if (n == 0)
		return(dlen + strlength(temp2));
	while (*temp2 != '\0') 
	{
		if (n != 1) {
			*temp1++ = *temp2;
			n--;
		}
		temp2++;
	}
	*temp1 = '\0';

	return(dlen + (temp2 - src));	/* count does not include NUL */
}

int main()
{
  char test50[256] = "\0zxcvzxcvzxcvxzcvzxcv";
char test51[] = "";  
  printf("%d-",strlcat(test50, "asdf", 16));
    printf("%s\n", test50);
    printf("%d-",strlcat(test50, "asdf", 6));
    printf("%s\n", test50);
    printf("%d-",strlcat(test50, "asdf", 4));
    printf("%s\n", test50);
    printf("%d-",strlcat(test50, test51, 16));
    printf("%s\n", test50);
    printf("%d-",strlcat(test50, "asdf", 0));
    printf("%s\n", test50);


}
