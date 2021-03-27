/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkanagar <gkanagar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 18:33:52 by gkanagar          #+#    #+#             */
/*   Updated: 2021/02/24 05:31:52 by gkanagar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/*
ft range create range of memory allocations and assign number from min to max -1
*/
int *ft_range(int min, int max)
{
    int *temp;
    int counter;

    counter = 0;
    if(min >= max)
        return (0);
    temp = (int *)malloc(sizeof(int) * (max - min));
    while(min < max)
    {
        *(temp + counter) = min;
        min++;
        counter++;
    }
    return (temp);
}