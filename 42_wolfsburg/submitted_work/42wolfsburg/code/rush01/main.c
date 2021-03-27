/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkanagar <gkanagar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 22:07:36 by gkanagar          #+#    #+#             */
/*   Updated: 2021/02/21 22:07:43 by gkanagar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "main.h"

int main(int argc, char *argv[])
{ 
    if(input_check(argc, argv))
        write(1, "Error\n", 6);
    else if(output_exist(argv))
        write(1, "Error\n", 6);
    else
        print_combination(argv);
    return (0);    
}