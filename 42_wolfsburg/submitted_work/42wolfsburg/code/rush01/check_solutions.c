/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_solution.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkanagar <gkanagar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 22:07:23 by gkanagar          #+#    #+#             */
/*   Updated: 2021/02/21 22:07:24 by gkanagar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int check_solution(int arr[], char *argv[])
{
    int temp,temp2,gr_no;
    int arr_2[4][4];
    int counter, counter2;
    int flag1,flag2,flag3,flag4, flag;

    flag1 =flag2 =flag3 =flag4 = flag =0;
    gr_no = 1;
    int i=0;
    while(i<4)
    {
    int j=0;
    while(j<4)
        {
        arr_2[i][j] = arr[i*4+j]; 
        j++;
        }
        i++;
    }   
    
    counter = 1;
    counter2 = 0;
    while(counter < 9)
    {
       if(counter < 5)
        {flag4 = 1;
            if(**(argv+counter) == '4')
            {
                if(!(arr_2[counter-1][0] ==1))
                {
                    flag4 = 0;
                } 
            }
        }
        else if (counter > 4)
            {flag4 = 1;
                if(**(argv+counter) == '4')
                {
                    if(!(arr_2[counter-5][3] ==1))
                    {
                        flag4 = 0;
                    }
                }
            }
        
        if(counter < 5)
        {
           if(**(argv+counter) == '3')
            {
               if(arr_2[counter-1][2] < arr_2[counter-1][3]) 
                {
                    gr_no = arr_2[counter-1][3];
                }
                else if(arr_2[counter-1][2] > arr_2[counter-1][3])
                {
                    gr_no = arr_2[counter-1][2];
                }
                 
                if(gr_no == 4 && (arr_2[counter-1][0] < arr_2[counter-1][1]))
                {
                    flag3 = 1;
                }
            }
        }
        else if (counter > 4)
        {
            if(**(argv+counter) == '3')
            {
                if(arr_2[counter-5][2] < arr_2[counter-5][3]) 
                {                         
                        gr_no = arr_2[counter-5][3];
                }
                else if(arr_2[counter-1][2] > arr_2[counter-1][3])
                {
                        gr_no = arr_2[counter-1][2];
                }
                if(gr_no == 4 && (arr_2[counter-1][0] < arr_2[counter-1][1]))
                {
                    flag3 = 1;
                }
            }
        }
        
        
        if(counter < 5)
        {
            if(**(argv+counter) == '2')
            {
               temp = 0;
                while(temp < 4)
                { 
                    if(arr_2[counter-1][0] < arr_2[counter-1][temp])
                    { 
                        temp2 = temp;
                        gr_no =   arr_2[counter-1][temp]; 
                        while(temp2<4)
                        {
                            if(gr_no < arr_2[counter-1][temp2])
                            {
                                flag2 = 1;
                            }
                            temp2++;    
                        }
                    }
                    temp++;
                }
            }
        }
        else if (counter > 4)
        {
           if(**(argv+counter) == '2')
            {
               temp = 0;
                while(temp < 4)
                { 
                    if(arr_2[counter-1][0] < arr_2[counter-1][temp])
                    { 
                        temp2 = temp;
                        gr_no =   arr_2[counter-1][temp]; 
                        while(temp2<4)
                        {
                            if(gr_no < arr_2[counter-1][temp2])
                            {
                                flag2 = 1;
                            }
                            temp2++;    
                        }
                    }
                    temp++;
                }
            }
        }
        

        if(counter < 5)
        {
            if(**(argv+counter) == '1')
            {
               flag1 =1;
                if(!(arr_2[counter-1][0] == 4))
                {
                    flag1 = 0;
                } 
            }
        }
        else if (counter > 5)
        {
            if(**(argv+counter) == '1')
            {
               flag1 =1;
                if(!(arr_2[counter-5][0] == 4))
                {
                    flag1 = 0;
                } 
            }
        }
        counter++;
    }

    if(flag4)
        {
            flag++;
        }
    if(flag3)
        {
          flag++;
        }
    if(flag2)
        {
            flag++;
        }
    if(flag1)
        {
            flag++;
        }
    
    return (flag);
}

