/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkanagar <gkanagar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 19:39:29 by gkanagar          #+#    #+#             */
/*   Updated: 2021/02/17 11:55:21 by gkanagar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	strlength(char *temp)
{
	int				counter;

	counter = 0;
	while (*temp != '\0')
	{
		temp++;
		counter++;
	}
	return (counter);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	char			*temp1;
	char			*temp2;
	unsigned int	n;
	unsigned int	dlen;

	temp1 = dest;
	temp2 = src;
	n = size;
	while (n-- != 0 && *temp1 != '\0')
		temp1++;
	dlen = temp1 - dest;
	n = size - dlen;
	if (n == 0)
		return (dlen + strlength(temp2));
	while (*temp2 != '\0')
	{
		if (n != 1)
		{
			*temp1++ = *temp2;
			n--;
		}
		temp2++;
	}
	*temp1 = '\0';
	return (dlen + (temp2 - src));
}
