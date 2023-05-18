/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jintan <jintan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 15:31:01 by jintan            #+#    #+#             */
/*   Updated: 2023/04/11 15:31:01 by jintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Declaring the unix header
#include <unistd.h>

// Declaring the function header
void    ft_putstr(char *str)
{
    // Declaring a temporary variable
    int i;

    // Initialising the variable
    i = 0;

    // Using a while loop to loop through the string
    while (str[i])
    {
        write(1,&str[i],1);
        i++;
    }
}