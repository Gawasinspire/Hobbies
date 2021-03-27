 
#include <stdio.h>
#include <unistd.h>
int main(int argc,char *argv[])
{
        int counter;

        counter = -1;
        if(argc >1)
                {
                        while(argv[argc -1][++counter])
                        {
//                      printf("%s", argv[i]);
                            //    if(argv[i][j] == 'a')
                                        write(1,&argv[argc-1][counter],1);
                         }
                        write(1,"\n",1);
                        return (0);
                }
        else 
                write(1,"\n",1);
                return (0);
}

