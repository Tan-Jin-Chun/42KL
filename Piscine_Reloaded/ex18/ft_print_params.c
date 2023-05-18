/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jintan <jintan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 15:56:36 by jintan            #+#    #+#             */
/*   Updated: 2023/04/11 15:56:36 by jintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Declaring the unix standard header
#include <unistd.h>

// Declaring the ft_putchar
void	ft_putchar(char c)
{
	write (1, &c, 1);
}

// Declaring the function header
int main(int argc, char *argv[])
{
	int	i;
	int	j;

	j = 1;
	while (j < argc)
	{
		i = 0;
		while (argv[j][i] != '\0')
		{
			ft_putchar(argv[j][i]);
			i++;
		}
		ft_putchar('\n');
		j++;
	}
	return (0);
}