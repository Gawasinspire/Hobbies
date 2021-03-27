/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkanagar <gkanagar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 18:39:21 by gkanagar          #+#    #+#             */
/*   Updated: 2021/02/19 18:44:13 by gkanagar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	unsigned int num;
	unsigned int temp;

	if (nb < 0)
	{
		num = (unsigned int)(-1 * nb);
		temp = 45;
		write(1, &temp, 1);
	}
	else
		num = (unsigned int)nb;
	if (num >= 10)
	{
		ft_putnbr(num / 10);
		ft_putnbr(num % 10);
	}
	else
	{
		temp = num + '0';
		write(1, &temp, 1);
	}
}
