/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkanagar <gkanagar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 17:47:15 by gkanagar          #+#    #+#             */
/*   Updated: 2021/02/18 17:21:40 by gkanagar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if ((str[counter] >= 'A') && (str[counter] <= 'Z'))
			str[counter] = str[counter] + 32;
		else
			str[counter] = str[counter];
		counter++;
	}
	return (str);
}
