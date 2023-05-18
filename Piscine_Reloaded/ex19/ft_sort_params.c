/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jintan <jintan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 16:03:02 by jintan            #+#    #+#             */
/*   Updated: 2023/04/11 16:03:02 by jintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Declaring the unix standard header
#include <unistd.h>

// Declaring the ft_putchar function
void    ft_putchar(char c)
{
    write(1,&c,1);
}

// Declaring the amin