/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkanagar <gkanagar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 18:39:24 by gkanagar          #+#    #+#             */
/*   Updated: 2021/02/22 10:55:16 by gkanagar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int		num;
	int		symbol;
	char	*temp;

	num = 0;
	symbol = 1;
	temp = str;
	while (*temp == ' ' || (*temp >= 9 && *temp <= 13))
		temp++;
	while (*temp == '-' || *temp == '+')
	{
		if (*temp == '-')
			symbol *= -1;
		temp++;
	}
	while (*temp >= '0' && *temp <= '9')
	{
		num = num * 10;
		num = num + (int)(*temp - '0');
		temp++;
	}
	return (num * symbol);
}
