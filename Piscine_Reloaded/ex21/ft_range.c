/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jintan <jintan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 17:11:29 by jintan            #+#    #+#             */
/*   Updated: 2023/04/11 17:11:29 by jintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Declaring the unix standard header
#include <stdlib.h>

// Declaring the function header
int	*ft_range(int min, int max)
{
    // Declaring the variables
	int		range;
	int		index;
	int		*buffer;
	int		*d;

    // If the minimum value is larger than maximum value
	if (min >= max)
    {
		return (0);
    }
	range = max - min;

    // Allocating memory
	d = (buffer = malloc(range * sizeof(int)));

    // Ensure that the memory allocation is successfully
	if (!d)
    {
		return (0);
    }
	index = 0;
	while (index < range)
	{
		buffer[index] = min + index;
		index++;
	}
	return (buffer);
}