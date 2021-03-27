/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkanagar <gkanagar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 15:52:11 by gkanagar          #+#    #+#             */
/*   Updated: 2021/02/23 10:52:32 by gkanagar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_prime(int nb)
{
	int num;
	int temp;

	num = 2;
	if (nb <= 1)
		return (0);
	if (nb >= 100000000)
		temp = nb / 10000;
	else
		temp = nb;
	while (num < temp)
	{
		if (nb % num == 0)
			return (0);
		++num;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (1)
	{
		if (is_prime(nb))
			return (nb);
		++nb;
	}
	return (0);
}
