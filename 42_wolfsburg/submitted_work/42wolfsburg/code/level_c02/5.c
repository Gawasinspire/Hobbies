/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkanagar <gkanagar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 17:46:52 by gkanagar          #+#    #+#             */
/*   Updated: 2021/02/15 17:35:17 by gkanagar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	while (*str != 0)
	{
		if ((*str < 'A') || (*str > 'Z'))
			return (0);
		str++;
	}
	return (1);
}
