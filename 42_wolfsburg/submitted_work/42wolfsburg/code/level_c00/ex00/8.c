/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkanagar <gkanagar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 21:19:02 by gkanagar          #+#    #+#             */
/*   Updated: 2021/02/18 05:45:44 by gkanagar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(int *range, int n)
{
	int counter;
	int temp;

	counter = 0;
	temp = 1;
	while (++counter < n)
	{
		if (range[counter - 1] >= range[counter])
			temp = 0;
	}
	if (!temp)
		return ;
	counter = -1;
	while (++counter < n)
	{
		temp = range[counter] + 48;
		write(1, &temp, 1);
	}
	if (range[0] < (10 - n))
	{
		write(1, ",", 1);
		write(1, " ", 1);
	}
}

void	ft_print_combn(int n)
{
	int counter;
	int range[10];

	if (n > 10 || n < 0)
		return ;
	counter = -n;
	while (++counter < n)
		range[counter] = counter;
	while (range[0] <= (10 - n) && n >= 1)
	{
		print(range, n);
		if (n == 0)
			break ;
		range[n - 1]++;
		counter = n;
		while (counter && n > 1)
		{
			counter--;
			if (range[counter] > 9)
			{
				range[counter - 1]++;
				range[counter] = 0;
			}
		}
	}
}
