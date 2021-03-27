/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkanagar <gkanagar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 17:47:31 by gkanagar          #+#    #+#             */
/*   Updated: 2021/02/22 12:56:05 by gkanagar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char temp)
{
	write(1, &temp, 1);
}

void	print_nonprintable(char temp)
{
	char		temp1;
	char		temp2;
	int			convert1;

	ft_putchar('\\');
	if (temp < 0)
	{
		convert1 = (-128 - (temp)) * -1 + 128;
		temp1 = convert1 / 16;
		temp2 = convert1 % 16;
	}
	else
	{
		temp1 = temp / 16;
		temp2 = temp % 16;
	}
	if (temp1 < 10)
		ft_putchar(temp1 + '0');
	else
		ft_putchar(temp1 + 87);
	if (temp2 < 10)
		ft_putchar(temp2 + '0');
	else
		ft_putchar(temp2 + 87);
}

void	ft_putstr_non_printable(char *str)
{
	char *temp;

	temp = str;
	while (*temp != 0)
	{
		if (*temp <= 31 || *temp == 127)
			print_nonprintable(*temp);
		else
			write(1, temp, 1);
		temp++;
	}
}
