/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jintan <jintan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 15:10:42 by jintan            #+#    #+#             */
/*   Updated: 2023/04/11 15:10:42 by jintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* Declaring the function header */
#include <unistd.h>

// Creating a recursive function that returns the factorial of the number
// given as a parameter
int ft_recursive_factorial(int nb)
{
    int result;

    result = 1;
    if (nb < 0)
    {
        return (0);
    }
    if (nb > 0)
    {
        result *= nb * ft_recursive_factorial(nb - 1);
        nb--;
    }
    return (nb);
}