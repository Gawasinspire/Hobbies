/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkanagar <gkanagar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 17:47:21 by gkanagar          #+#    #+#             */
/*   Updated: 2021/02/24 12:14:22 by gkanagar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strcapitalize(char *str)
{
	int		flag;
	int		counter;

	flag = 1;
	counter = 0;
	while (str[counter] != '\0')
	{
		if (((str[counter] >= 'A') && (str[counter] <= 'Z'))
		|| ((str[counter] >= 'a') && (str[counter] <= 'z'))
		|| ((str[counter] >= '0') && (str[counter] <= '9')))
		{
			if (((str[counter] >= 'a') && (str[counter] <= 'z')) && (flag))
				str[counter] = str[counter] - 32;
			else if ((str[counter] >= 'A') && (str[counter] <= 'Z') && (!flag))
				str[counter] = str[counter] + 32;
			flag = 0;
		}
		else
			flag = 1;
		counter++;
	}
	return (str);
}
