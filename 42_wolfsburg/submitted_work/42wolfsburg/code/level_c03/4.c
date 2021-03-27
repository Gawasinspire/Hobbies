/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkanagar <gkanagar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 19:39:26 by gkanagar          #+#    #+#             */
/*   Updated: 2021/02/17 06:09:05 by gkanagar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int counter1;
	int counter2;

	if (*to_find == 0)
		return (str);
	counter1 = 0;
	while (str[counter1] != '\0')
	{
		counter2 = 0;
		while (to_find[counter2] == str[counter1 + counter2])
		{
			if (to_find[counter2 + 1] == '\0')
				return (str + counter1);
			counter2++;
		}
		counter1++;
	}
	return (0);
}
