/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkanagar <gkanagar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 15:52:06 by gkanagar          #+#    #+#             */
/*   Updated: 2021/02/23 09:22:57 by gkanagar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int num;
	int temp;

	num = 1;
	if (nb == 1)
		return (1);
	if (nb >= 100000000)
		temp = nb / 10000;
	else
		temp = nb / 2;
	while (num <= temp)
	{
		if (num * num == nb)
			return (num);
		num++;
	}
	return (0);
}
