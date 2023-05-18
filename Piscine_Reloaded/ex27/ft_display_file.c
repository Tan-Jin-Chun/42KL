/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jintan <jintan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 18:48:33 by jintan            #+#    #+#             */
/*   Updated: 2023/04/11 18:48:33 by jintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		rd_cl(argv[1]);
		return (0);
	}
	else if (argc == 1)
	{
		ft_putstr("File name missing.\n");
		return (1);
	}
	else
	{
		ft_putstr("Too many arguments.\n");
	}
	return (0);
}

/* Read from file, close*/
// Takes a pointer to a string 'arg' as input, which represents the 
// path to a file
int	rd_cl(char *arg)
{
	// Declaring the variables
	int		fd;
	int		ret;
	int		buf_size;
	char	buf[11];

	// Initialising the variable
	buf_size = 10;

	// Opening the file
	fd = open(arg, O_RDONLY);

	// If the opening of the file is unsuccessful, return -1
	if (fd == -1)
	{
		return (1);
	}

	// The character buffer which reads the contents of the 
	// file into the buffer using the 'read' system call
	// returns the number of bytes read
	ret = read(fd, buf, buf_size);
	while (ret)
	{
		buf[ret] = '\0';
		ft_putstr(buf);
		ret = read(fd, buf, buf_size);
	}

	// Returns a 1 if the file is not successfully read
	if (close(fd) == -1)
	{
		return (1);
	}

	// Otherwise returns a 0
	return (0);
}

// Basically the function to write the string out
void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}