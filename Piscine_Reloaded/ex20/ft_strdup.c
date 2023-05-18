/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jintan <jintan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 16:13:15 by jintan            #+#    #+#             */
/*   Updated: 2023/04/11 16:13:15 by jintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* Declaring the function header */
#include <stdlib.h>

// Getting the length of the string
int	ft_str_length(char *str)
{
	int	index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

// Declaring the string duplicate function
char	*ft_strdup(char *src)
{
    // Declaring the variables
	int		index;
	char	*dest;
	char	*d;

    // Initialising the variables
	index = 0;
	d = ((dest = (char *)malloc(ft_str_length(src) * sizeof(char) + 1)));

	// If the memory allocation fails, return NULL
	if (!d)
	{
		return (0);
	}

	// Looping through the source string
	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}
