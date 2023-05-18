/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jintan <jintan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 15:41:32 by jintan            #+#    #+#             */
/*   Updated: 2023/04/11 15:56:10 by jintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Declaring the unix standard header
#include <unistd.h>

// declaring the function header
int ft_strcmp(char *s1, char *s2)
{
    unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
