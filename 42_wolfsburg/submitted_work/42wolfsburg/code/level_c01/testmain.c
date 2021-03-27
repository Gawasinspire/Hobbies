//cp -rf ex0*/* .
//cp test_main_c01.c ft_*.c
//gcc -o test test_main_c01.c ft_*.c
//gcc -o test test_main_c03.c ../../c03/c03/ex*/ft_*.c -Wall -Wextra -Werror

#include "test.h"
#include <stdio.h>
#include <unistd.h>

void print_string(int *ptr, int size)
{
    char c;
    int a =0,b = size;
	while(a<b)
	{	
		
		c = *ptr+'0';
		write(1,&c,1);
	a++;
	ptr++;
	}
    printf("\t");

    
}

int main()
{
    //test 00
    printf("\nTest00\n");
    int v0 = 15;
	ft_ft(&v0);
    printf("\n%d\n",v0);
	printf("expected 42\n");

    //test 01
    printf("\nTest01\n");
    int a1 = 15;
	int* b1 = &a1;
	int** c1 = &b1;
	int*** d1 = &c1;
	int**** e1 = &d1;
	int***** f1 = &e1;
	int****** g1 = &f1;
	int******* h1 = &g1;
	int******** i1 = &h1;
	int********* j1 = &i1;

	ft_ultimate_ft(j1);

	printf("\n%d\n", a1);
    printf("expected 42\n");

    //test 02
    printf("\nTest02\n");
    int a2 = 15;
	int b2 = -25;
	ft_swap(&a2, &b2);
	printf("\n%d,%d\n", a2, b2);
	printf("expected -25, 15\n");

    //test 03
    printf("\nTest03\n");
    int div3 = 0, mod3 = 0;
	ft_div_mod(40, 15, &div3, &mod3);
	printf("\n%d,%d\n", div3, mod3);
	printf("expected = 2,10\n");


    //test 04
    printf("\nTest04\n");
    int a4 = 40, b4 = 15;
	ft_ultimate_div_mod(&a4, &b4);
	printf("\n%d,%d\n", a4, b4);
    printf("expected = 2,10\n");

    //test 05
    printf("\nTest05\n");
    printf("\n");
    char address5[]="hello!";
    char *ptr5;
    ptr5 = address5;
    ft_putstr(ptr5);            //&ptr5[0]
    printf("\nexpected = hello!\n");
    ft_putstr("test1\n");
	ft_putstr("test2\n");
	ft_putstr("test3\n");
    printf("\nexpected = test1\ntest2\ntest3\n");
    
    ft_putstr("");
	ft_putstr("");
	ft_putstr("");
    printf("\nexpected = '' \n");

    //test 06
    printf("\nTest06\n");
    char address16[]="loll";
    char address26[]="crazy";
    char address36[]="things";
    char address46[]="";

    char *ptr16;
    char *ptr26;
    char *ptr36;
    char *ptr46;

    ptr16 = address16;
    ptr26 = address26;
    ptr36 = address36;
    ptr46 = address46;

    printf("%d,%d,%d", ft_strlen(ptr16), ft_strlen(ptr26), ft_strlen(ptr36));
    printf("\nexpected = '4,5,6'\n");
    printf("%d", ft_strlen(ptr46));
	printf("\nexpected = 0\n");

    //test 07
    printf("\nTest07\n");
    
    int test17[] = {1,2,3,4};
    int test27[] = {1,2,3,4,5};
	int test37[] = {4,0,5,6,7,8,8};
	int test47[] = {8,8};
	int test57[] = {};
    
    int size17, size27, size37, size47, size57;
   
    int *ptr17;
    int *ptr27;
    int *ptr37;
    int *ptr47;
    int *ptr57;

    ptr17 = test17;
    ptr27 = test27;
    ptr37 = test37;
    ptr47 = test47;
    ptr57 = test57;

	ft_rev_int_tab(ptr17, 4);
    print_string(ptr17, 4);
    
    ft_rev_int_tab(ptr27, 5);
    print_string(ptr27, 5);
    
    ft_rev_int_tab(ptr37, 7);
    print_string(ptr37, 7);
    
    ft_rev_int_tab(ptr47, 2);
    print_string(ptr47, 2);
    
    ft_rev_int_tab(ptr57, 0);
    print_string(ptr57, 0);
    printf("\nexpected = 4321\t54321\t4056788\t88\n\n");

    //printf("\nexpected = ");


    //test 08
    printf("\nTest08\n");

    int test18[] = {4,0,5,6,7,8,8};
	int *ptr18;
    ptr18 = test18;

    ft_sort_int_tab(ptr18, 7);
	print_string(ptr18, 7);
    
    printf("\nexpected = 0..8\n");

    return 0;
}