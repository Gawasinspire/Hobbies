/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkanagar <gkanagar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 22:39:25 by gkanagar          #+#    #+#             */
/*   Updated: 2021/02/23 14:08:27 by gkanagar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int			ft_cmp(char *temp1, char *temp2)
{
	while (*temp1 && *temp2 && (*temp1 == *temp2))
	{
		temp1++;
		temp2++;
	}
	return (*temp1 - *temp2);
}

void		ft_sort(int size, char *arg[])
{
	int		counter1;
	int		counter2;
	char	*temp;

	counter1 = 1;
	while (counter1 < size)
	{
		counter2 = counter1 + 1;
		while (counter2 < size)
		{
			if (ft_cmp(arg[counter2], arg[counter1]) < 0)
			{
				temp = arg[counter1];
				arg[counter1] = arg[counter2];
				arg[counter2] = temp;
			}
			counter2++;
		}
		counter1++;
	}
}

void		ft_print(int argc, char *argv[])
{
	char	*temp;
	int		counter;

	counter = 1;
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
}

int			main(int argc, char *argv[])
{
	ft_sort(argc, argv);
	ft_print(argc, argv);
	return (0);
}
