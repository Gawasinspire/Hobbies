/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkanagar <gkanagar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 18:33:03 by gkanagar          #+#    #+#             */
/*   Updated: 2021/02/22 10:43:55 by gkanagar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	char	*temp;
	int		counter;

	temp = str;
	counter = 0;
	while (*temp != 0)
	{
		counter++;
		temp++;
	}
	return (counter);
}
