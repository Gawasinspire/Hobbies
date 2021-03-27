/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkanagar <gkanagar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 17:47:24 by gkanagar          #+#    #+#             */
/*   Updated: 2021/02/24 12:25:50 by gkanagar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int		ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	counter;

	counter = 0;
	if (size == 0)
	{
		while (src[counter] != '\0')
			counter++;
		return (counter);
	}
	while ((counter < size - 1) && (src[counter] != '\0'))
	{
		dest[counter] = src[counter];
		counter++;
	}
	if (counter < size)
		dest[counter] = '\0';
	while (src[counter] != '\0')
		counter++;
	return (counter);
}
