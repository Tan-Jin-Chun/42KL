/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jintan <jintan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 17:56:34 by jintan            #+#    #+#             */
/*   Updated: 2023/04/11 17:56:34 by jintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_count_if(char **tab, int(*f)(char*))
{
    // Declaring the variables
    int	i;
	int	count;
    int length;

    // Initialising the variables
	count = 0;
	i = 0;

    // Using a while loop to loop through the tab 
    while(tab[length])
    {
        length++;
    }
    
    // Going through the table and then incrementing count
    // if the function produces a 1
	while (i < length)
	{
		if ((*f)(tab[i]))
			count++;
		i++;
	}

    // Returning back the value of the counter
	return (count);
}