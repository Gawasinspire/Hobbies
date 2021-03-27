/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkanagar <gkanagar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 20:04:16 by gkanagar          #+#    #+#             */
/*   Updated: 2021/02/13 09:18:46 by gkanagar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int counter;
	int swap;

	counter = 0;
	while (counter < size)
	{
		swap = tab[counter];
		tab[counter] = tab[size - 1];
		tab[size - 1] = swap;
		counter++;
		size--;
	}
}
