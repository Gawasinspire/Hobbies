/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkanagar <gkanagar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 21:56:07 by gkanagar          #+#    #+#             */
/*   Updated: 2021/02/19 08:16:43 by gkanagar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	int num;

	num = 97;
	while (num < 123)
	{
		write(1, &num, 1);
		num = num + 1;
	}
}

int main()
{
	ft_print_alphabet();
	return 0;
}