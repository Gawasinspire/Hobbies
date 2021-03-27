/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkanagar <gkanagar@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 21:56:07 by gkanagar          #+#    #+#             */
/*   Updated: 2021/02/11 21:55:35 by gkanagar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char num1;
	char num2;
	char num3;

	num1 = '0' - 1;
	while (num1++ < '7')
	{
		num2 = num1;
		while (num2++ < '8')
		{
			num3 = num2;
			while (num3++ < '9')
			{
				write(1, &num1, sizeof(num1));
				write(1, &num2, sizeof(num2));
				write(1, &num3, sizeof(num3));
				if (!(num1 == '7' && num2 == '8' && num3 == '9'))
				{
					write(1, ",", 1);
					write(1, " ", 1);
				}
			}
		}
	}
}
