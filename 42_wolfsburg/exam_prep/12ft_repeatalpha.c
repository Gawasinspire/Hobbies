#include <unistd.h>
int main(int argc, char *argv[])
{
	char a;
	int counter,i;
	i = 0; 

	counter = 1;
	a = 'a';
	if(argc > 1 )
	{	
		i=0;
		while(argv[1][i])
		{
			write(1,&argv[1][i],1);
			i++;
		}
	}
	if(argc != 2)
	{
		write(1,"\n",1);	

	}
        return (0);
}

