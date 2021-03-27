/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkanagar <gkanagar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 22:39:16 by gkanagar          #+#    #+#             */
/*   Updated: 2021/02/23 13:48:20 by gkanagar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	char	*temp;

	temp = argv[0];
	if (argc <= 0)
		return (0);
	while (*temp)
	{
		write(1, temp, 1);
		temp++;
	}
	write(1, "\n", 1);
	return (0);
}
