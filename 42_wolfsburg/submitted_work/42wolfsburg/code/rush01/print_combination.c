/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_combination.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkanagar <gkanagar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 22:07:57 by gkanagar          #+#    #+#             */
/*   Updated: 2021/02/21 22:47:57 by gkanagar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "main.h"

void print_combination(int argc, char *argv[])
{   
    int arr[] = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
    int temp2;
    int gr_no;
    char ch;

    int a,b,c,d, e,f,g,h, i,j,k,l,  m,n,o,p;
    int flag, counter, counter2;


    flag =0;
    counter = 0;
    counter2 = 0;
    for(a=1; a<5; a++){
    for(b=1; b<5; b++){
    for(c=1; c<5; c++){
    for(d=1; d<5; d++){
        if(!(a==b || a==c || a==d || b==c || b==d || c==d ))
        {
        for(e=1; e<5; e++){
        for(f=1; f<5; f++){
        for(g=1; g<5; g++){
        for(h=1; h<5; h++){
        if(!(e==f || e==g || e==h || e==a || f==g || f==h || f==b || g==h || g==c || h == d ))
        {
            for(i=1; i<5; i++){
            for(j=1; j<5; j++){
            for(k=1; k<5; k++){
            for(l=1; l<5; l++){
            if(!(i==j || i==k || i==l || i ==a || i==e || j==k || j==l || j==b || j==f || k==l || k==i || k==g || k==c || l==h || l==d ))
            {
                for(m=1; m<5; m++){
                for(n=1; n<5; n++){
                for(o=1; o<5; o++){
                for(p=1; p<5; p++){
                    if(!(m==n || m==o || m==p || m==a || m==e || m==i|| n==o || n==p || n==b || n==f || n==j || o==p || o==c || o==g || o==k || p==d || p==h || p==l ))
                    {
                        int arr[] = {a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p};
                        if(counter < 100)
                            flag = check_solution(arr, argc, argv);
                        
                        counter++;
                        if(flag == 4)   
                        {
                            while(counter2 < 16)
                            {
                                ch = arr[counter2] + '0';
                                write(1, &ch ,1);
                                if((counter2+1) % 4 == 0)
                                    write(1, "\n",1 );
                                
                                counter2++;
                            }
                            return ;   
                            }
                    }
                    }}}}
            }
            }}}}
        }
        }}}}
        }
            }
        }
    }
}
}
