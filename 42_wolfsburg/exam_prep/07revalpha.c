#include <unistd.h>
int main()
{
        char odd;
        char even;

        int counter;
        counter = 0;
        odd = 'z';
        even = 'Y';
	while(even >= 'A')
        {
                write(1,&odd,1);
                write(1,&even,1);
                odd -= 2 ;
                even -= 2 ;
        }
        return (0);
}

