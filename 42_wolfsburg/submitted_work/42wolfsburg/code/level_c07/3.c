/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkanagar <gkanagar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 18:33:59 by gkanagar          #+#    #+#             */
/*   Updated: 2021/02/24 20:03:49 by gkanagar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 Write a function that will concatenate all the strings pointed by strs separated by sep.
    •size is the number of strings in strs
    •ifsize is 0, it should a freeable empty string
*/

#include <stdlib.h>

#include <stdio.h>

int strlength(char *str)
{
    char *temp;
    int counter;
    
    temp = str;
    counter = 0;
    while (*temp != '\0')
    {
        temp++;
        counter++;
    }
    return (counter);    
}
void print_sep(char copy_temp[], char *sep, int position)
{
    int counter;
    
    counter = 0;
    while(*sep)
    {
        copy_temp[position + counter] = *sep;    
        counter++;    
    }    
}
int find_total_size(int size, char **strs, char *sep)
{
    int counter;
    int total_size;
    
    total_size=0;
    counter = 0;
    printf("%i", total_size);
    return (total_size);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
    char *join_temp;
    char *before_join_temp;
    int total_size;
    
    total_size = 0;
    if(size != 0)
    {
       total_size = find_total_size(size, strs, sep);
    }
    else
    {
        before_join_temp = (char *)malloc(1);
        *before_join_temp = 0;
        return (before_join_temp);
    }
    join_temp = before_join_temp;
    
    return (join_temp);
}

int main()
{
    char *arr[] = {"abc", "123"};
    int size;
    size = 2;
    char **temp;
    char sep[] = "##";
    
    temp = arr;
    int i, j;
    i = 0;
    j = 0;
    int k;
//j = strlength(*(arr+0));
    while(i< size)
        {
            j=0;
            while(j < 3)
            {
                printf("%c", *(*(arr + i)+ j ));        
                j++;   
            }
            if (i == size -1)
            {
                printf("\n");
                return (0);
            }
            else
            {
                k = 0;
                while(sep[k])
                {
                    printf("%c", *(sep + k));
                    k++;
                }
            }
            printf("%i", strlength())
            i++;
        }
 printf("\n");

 return (0);        
}