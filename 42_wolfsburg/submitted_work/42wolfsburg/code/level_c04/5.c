/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkanagar <gkanagar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 18:39:30 by gkanagar          #+#    #+#             */
/*   Updated: 2021/02/22 12:37:34 by gkanagar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_strleng(char *str)
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

int			check_inval(char *str)
{
	char	*temp;
	int		counter;

	temp = str;
	if (*str == 0 || *(str + 1) == 0)
		return (0);
	while (*temp)
	{
		if (*temp == '+' || *temp == '-' || *temp <= 31)
			return (0);
		counter = 1;
		while (*(temp + counter))
		{
			if (*(temp + counter) == *temp)
				return (0);
			counter++;
		}
		temp++;
	}
	return (1);
}

int			ft_atoi_base(char *str, char *base)
{
	int		num;
	int		symbol;
	char	*temp;

	num = 0;
	symbol = 1;
	temp = str;
	if (check_inval(base))
	{
		while (*temp == ' ' || (*temp >= 9 && *temp <= 13))
			temp++;
		while (*temp == '-' || *temp == '+')
		{
			if (*temp == '-')
				symbol = symbol - 1;
			temp++;
		}
		while (*temp >= '0' && *temp <= '9')
		{
			num = num * ft_strleng(base);
			num = num + (int)(*temp - '0');
			temp++;
		}
	}
	return (num * symbol);
}
