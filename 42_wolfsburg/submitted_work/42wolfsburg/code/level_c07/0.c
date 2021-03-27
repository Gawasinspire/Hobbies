/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkanagar <gkanagar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 18:33:48 by gkanagar          #+#    #+#             */
/*   Updated: 2021/02/24 05:14:42 by gkanagar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

//char *strdup(const char *s);
//The strdup() function returns a pointer to a new string which is
//a duplicate of the string s.  Memory for the new string is
//obtained with malloc(3), and can be freed with free(3).
int strlen(char *str)
{
    char *temp;
    int counter;
    
    temp = str;
    counter = 0;
    while (*temp != 0)
    {
        temp++;
        counter++;
    }
    return (counter);    
}

char *ft_strdup(char *src)
{
    char *copy_temp;
    int counter;
    
    counter = 0;
    copy_temp = (char *)malloc(strlen(src) + 1);
    if (copy_temp == NULL)
        return (NULL);
    while (src[counter])
    {
        copy_temp[counter] = src[counter];
        counter++;
    }
    copy_temp[counter] = 0;
    return (copy_temp);
}