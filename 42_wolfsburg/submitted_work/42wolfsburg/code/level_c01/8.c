/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkanagar <gkanagar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 20:04:19 by gkanagar          #+#    #+#             */
/*   Updated: 2021/02/13 09:23:04 by gkanagar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int counter;
	int swap;
	int temp;

	counter = 0;
	while (counter < size)
	{
		temp = counter + 1;
		while (temp < size)
		{
			if (tab[temp] < tab[counter])
			{
				swap = tab[counter];
				tab[counter] = tab[temp];
				tab[temp] = swap;
			}
			temp++;
		}
		counter++;
	}
}
