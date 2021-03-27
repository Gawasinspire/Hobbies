#include <stdio.h>
#include <string.h>

int astrcmp(const char *p1, const char *p2)
{
  const unsigned char *s1 = (const unsigned char *) p1;
  const unsigned char *s2 = (const unsigned char *) p2;
  unsigned char c1, c2;
  do
    {
      c1 = (unsigned char) *s1++;
      c2 = (unsigned char) *s2++;
      if (c1 == '\0')
        return c1 - c2;
    }
  while (c1 == c2);
  return c1 - c2;
}

int ft_strcmp(char *s1, char *s2)
{
    char *temp1;
    char *temp2;
    unsigned char c1,c2;
    
    temp1=s1;
    temp2=s2;
    
    c1 = (unsigned char) *temp1++;
    c2 = (unsigned char) *temp2++;
    while(c1==c2)
    {
        c1 = (unsigned char) *temp1++;
        c2 = (unsigned char) *temp2++;
        if (c1 == '\0')
            return (c1 - c2);      
    }
    return c1-c2;
}

int main(){
printf("\nTest00\n");
   	
    // compares 2 strings character by character returns 0 if they are equal 
    // and returns + if the first non mathched character is greater and vice versa 

    printf("%d\n", ft_strcmp("asdf", "asdf")); 
    printf("%d\n", ft_strcmp("asde", "asdf")); 
    printf("%d\n", ft_strcmp("asdg", "asdf")); 
    printf("%d\n", ft_strcmp("", "")); 
    printf("%d\n", ft_strcmp("A", "")); 
    printf("%d\n", ft_strcmp("", "A")); 
    
    
    printf("\nexpected\n");
    printf("%d\n", strcmp("asdf", "asdf")); 
    printf("%d\n", strcmp("asde", "asdf")); 
    printf("%d\n", strcmp("asdg", "asdf")); 
    printf("%d\n", strcmp("", "")); 
    printf("%d\n", strcmp("A", "")); 
    printf("%d\n", strcmp("", "A")); 
     
    printf("\nexpected official\n");
    printf("%d\n", astrcmp("asdf", "asdf")); 
    printf("%d\n", astrcmp("asde", "asdf")); 
    printf("%d\n", astrcmp("asdg", "asdf")); 
    printf("%d\n", astrcmp("", "")); 
    printf("%d\n", astrcmp("A", "")); 
    printf("%d\n", astrcmp("", "A")); 
    
   
}
