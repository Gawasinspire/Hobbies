/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkanagar <gkanagar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 18:33:56 by gkanagar          #+#    #+#             */
/*   Updated: 2021/02/24 13:10:49 by gkanagar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/*
ft range create range of memory allocations and assign number from min to max -1
*/

int ft_ultimate_range(int **range, int min, int max)
{
    int counter;

    counter = 0;
    if(min >= max)
    {
        *range = NULL;
        return (0);
    }
    if ((*range = (int *)malloc(sizeof(int) * (max - min))) == NULL)
        return (-1);
    while(min < max)
    {
        *(*range + counter) = min;
        min++;
        counter++;
    }
    return (counter));
}