/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkanagar <gkanagar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 21:56:07 by gkanagar          #+#    #+#             */
/*   Updated: 2021/02/19 08:23:59 by gkanagar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	get_digit(char n, int place_value)
{
	char d;

	if (place_value == 1)
	{
		d = n / 10 + 48;
	}
	else
	{
		d = n % 10 + 48;
	}
	return (d);
}

void	ft_print_comb2(void)
{
	char num1;
	char num2;
	char temp;

	num1 = -1;
	while (num1++ < 99)
	{
		num2 = num1;
		while (num2++ < 99)
		{
			if (!(num1 == 0 && num2 == 1))
				write(1, ", ", 2);
			temp = get_digit(num1, 1);
			write(1, &temp, 1);
			temp = get_digit(num1, 0);
			write(1, &temp, 1);
			write(1, " ", 1);
			temp = get_digit(num2, 1);
			write(1, &temp, 1);
			temp = get_digit(num2, 0);
			write(1, &temp, 1);
		}
	}
}
int main()
{
	ft_print_comb2();
	return 0;
}
