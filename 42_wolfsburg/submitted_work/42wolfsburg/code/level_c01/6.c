/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkanagar <gkanagar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 20:04:13 by gkanagar          #+#    #+#             */
/*   Updated: 2021/02/13 09:36:54 by gkanagar         ###   ########.fr       */
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
