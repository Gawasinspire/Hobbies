/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkanagar <gkanagar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 15:52:13 by gkanagar          #+#    #+#             */
/*   Updated: 2021/02/22 22:29:39 by gkanagar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int			row_colomn_diff(int x, int y)
{
	if (x >= y)
		return (x - y);
	else
		return (y - x);
}

int			is_no_conflict(int queen, int *board)
{
	int		counter;

	counter = 0;
	while (counter < queen)
	{
		if (board[queen] == board[counter])
			return (0);
		if (row_colomn_diff(board[queen], board[counter]) == (queen - counter))
			return (0);
		counter++;
	}
	return (1);
}

void		print(int *board)
{
	int		counter;
	char	temp;

	counter = 0;
	while (counter < 10)
	{
		temp = board[counter] + '0';
		write(1, &temp, 1);
		counter++;
	}
	write(1, "\n", 1);
}

void		compute(int queen, int *board, int *counter1)
{
	board[queen] = 0;
	while (board[queen] < 10)
	{
		if (is_no_conflict(queen, board))
		{
			if (queen == 9)
			{
				print(board);
				(*counter1)++;
			}
			else
				compute(queen + 1, board, counter1);
		}
		board[queen]++;
	}
}

int			ft_ten_queens_puzzle(void)
{
	int		board[10];
	int		queen;
	int		counter1;

	counter1 = 0;
	queen = 0;
	compute(queen, board, &counter1);
	return (counter1);
}
