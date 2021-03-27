/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkanagar <gkanagar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 19:39:14 by gkanagar          #+#    #+#             */
/*   Updated: 2021/02/18 09:00:03 by gkanagar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	unsigned char temp1;
	unsigned char temp2;

	while (1)
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
	}
	return (0);
}
