#include <unistd.h>
//work only for positive integer
//increment and check for is_prime function
//start from 2 to add if num is_pprime and condition and <= given number 
//
#include <stdio.h>
void ft_putchar(char *s)
{
	write(1,s,1);
}

void print_answer()
{}

int fatoi(char *s)
{
int num; //may fail in test case due to range
//num = s[1];
num =0;
while(*s >='0' && *s <='9')
	num = num*10 + *s++ - '0';
return (num);
}

int is_prime(int n)
{
	int i;
	i =2;
	if(n <2)
		return 0;
	while( i<n)
		{
			if(n%i == 0)
				return 0;
			i++;		
		}
	return (1);
}

int main(int argc, char *argv[])
{
int a,num;
a =9;
if(argc ==2)
{
	num=fatoi(argv[1]);
	printf("num = %i", num);
}
printf("%d", is_prime(num));
}
