/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jintan <jintan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 15:18:57 by jintan            #+#    #+#             */
/*   Updated: 2023/04/11 15:18:57 by jintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Declaring the function header
#include <unistd.h>

// Declaring the function header
int ft_sqrt(int nb)
{
    // Creating a function that returns the sqrt of a number or 0 if the number
    // is an irrational number

    // First, we need to create a new variable
    int number;
    int index;

    number = nb;
    index = 2;

    // Using an if-else statement here
    if (number <= 0)
    {
        return (0);
    }
    if (number == 1)
    {
        return (1);
    }
    if (number >= 2)
    {
        // Using a while loop to check whether when you multiply
        // the index, you will get the number
        while (index * index < number)
        {
            if (index * index == number)
            {
                return (index);
            }
            index++;
        }
        return (0);
    }
}