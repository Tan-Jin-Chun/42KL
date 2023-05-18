/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jintan <jintan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 12:19:12 by jintan            #+#    #+#             */
/*   Updated: 2023/04/11 12:19:12 by jintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Declaring the unix standard header */
#include <unistd.h>

void    ft_is_negative(int n)
{
    if (n >= 0)
    {
        ft_putchar("P");
    }
    else
    {
        ft_putchar("N");
    }
}