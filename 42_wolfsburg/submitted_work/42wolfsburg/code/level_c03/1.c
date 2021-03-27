/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkanagar <gkanagar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 19:39:18 by gkanagar          #+#    #+#             */
/*   Updated: 2021/02/18 20:23:52 by gkanagar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned char	temp1;
	unsigned char	temp2;
	unsigned int	counter;

	counter = 0;
	while (counter < n)
	{
		temp1 = *s1++;
		temp2 = *s2++;
		if (temp1 != temp2)
		{
			if (temp1 < temp2)
				return (-1);
			else
				return (1);
		}
		if (!temp1)
			break ;
		counter++;
	}
	return (0);
}
