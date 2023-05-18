/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jintan <jintan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 01:33:41 by jintan            #+#    #+#             */
/*   Updated: 2023/04/10 01:33:41 by jintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* Declaring the function header */
#include <unistd.h>

/* Declaring the main function */
void	ft_putchar(char c)
{
	write(1, &c, 1);
}