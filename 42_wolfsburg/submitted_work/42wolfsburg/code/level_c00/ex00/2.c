/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkanagar <gkanagar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 21:56:07 by gkanagar          #+#    #+#             */
/*   Updated: 2021/02/19 08:16:28 by gkanagar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int g_alphabet;

	g_alphabet = 122;
	while (g_alphabet > 96)
	{
		write(1, &g_alphabet, 1);
		g_alphabet = g_alphabet - 1;
	}
}

