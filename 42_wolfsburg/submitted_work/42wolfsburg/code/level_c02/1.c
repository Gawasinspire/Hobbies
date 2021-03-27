/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkanagar <gkanagar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 17:46:30 by gkanagar          #+#    #+#             */
/*   Updated: 2021/02/15 17:23:40 by gkanagar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, const char *src, unsigned int n)
{
	unsigned int counter;

	counter = 0;
	while (counter < n && src[counter] != '\0')
	{
		*(dest + counter) = *(src + counter);
		counter++;
	}
	while (counter < n)
	{
		*(dest + counter) = '\0';
		counter++;
	}
	return (dest);
}
