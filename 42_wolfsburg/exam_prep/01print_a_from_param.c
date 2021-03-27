#include <stdio.h>
#include <unistd.h>
int strleng(char *argv)
{	
	int counter;
	counter = 0;

	while(*argv)
	{
		counter++;
		argv++;
	}
	return (counter);

}

int main(int argc,char *argv[])
{
	char temp;
	int len,i,j;
	temp = argc + '0';
//	printf("%d", argc);
	write(1, &temp,1);
	write(1,"\n", 1);
//	int i;
	i=1;
	len=0;

	while(i<argc)
	{
		if(argc == 2)
		{
			len = strleng(argv[i]);
			j=0;	
			while(j<len)
			{
//			printf("%s", argv[i]);
				if(argv[i][j] == 'a')
					write(1,&argv[i][j],1);
				j++;
			}
		}
		else
			write(1,"\n",1);			
		i++;

	}
	
	return (0);
}
