/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jintan <jintan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 12:29:16 by jintan            #+#    #+#             */
/*   Updated: 2023/04/11 12:29:16 by jintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* Declaring the funciton header */
#include <unistd.h>

int ft_iterative_factorial(int nb)
{
    unsigned int	result;

	result = 1;
    if (nb < 0)
	{
		return (0);
	}
	while (nb > 0)
	{
		 result *= nb;
		nb--;
	}
	return (result);
}