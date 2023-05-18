/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jintan <jintan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 15:36:32 by jintan            #+#    #+#             */
/*   Updated: 2023/04/11 15:36:32 by jintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Declaring the unix standard header
#include <unistd.h>

// Declaring the funcntion header
int ft_strlen(char *str)
{
    // Declaring and initialising the variable
    int i;

    i = 0;
    // Using a while loop to loop through the string
    while(str[i])
    {
        i++;
    }
    return (i);
}