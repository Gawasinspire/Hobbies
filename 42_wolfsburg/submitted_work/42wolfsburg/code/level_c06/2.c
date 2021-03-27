/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkanagar <gkanagar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 22:39:23 by gkanagar          #+#    #+#             */
/*   Updated: 2021/02/23 14:02:50 by gkanagar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int			main(int argc, char *argv[])
{
	char	*temp;
	int		counter;

	counter = argc - 1;
	if (argc <= 0)
		return (0);
	while (counter > 0)
	{
		temp = argv[counter];
		while (*temp)
		{
			write(1, temp, 1);
			temp++;
		}
		counter--;
		write(1, "\n", 1);
	}
	return (0);
}
