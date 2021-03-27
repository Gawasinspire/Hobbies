/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkanagar <gkanagar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 22:39:20 by gkanagar          #+#    #+#             */
/*   Updated: 2021/02/23 13:59:59 by gkanagar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int			main(int argc, char *argv[])
{
	char	*temp;
	int		counter;

	counter = 1;
	if (argc <= 0)
		return (0);
	while (counter < argc)
	{
		temp = argv[counter];
		while (*temp)
		{
			write(1, temp, 1);
			temp++;
		}
		counter++;
		write(1, "\n", 1);
	}
	return (0);
}
