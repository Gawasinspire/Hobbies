/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkanagar <gkanagar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 22:07:48 by gkanagar          #+#    #+#             */
/*   Updated: 2021/02/21 22:07:52 by gkanagar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int input_check(int argc, char *argv[])
{
    int counter;
    int flag;

    counter = 1;
    flag = 1;
    
    while(counter < argc)
    {
        if(!((**(argv + counter) < '5') && (**(argv + counter) > '0')))
            flag = 0;
        counter++;
    }
    if((argc == 17) && (flag))
        {
        return 0;
        }
    else
        return 1;

}

