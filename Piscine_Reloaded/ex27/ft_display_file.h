/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jintan <jintan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 18:53:26 by jintan            #+#    #+#             */
/*   Updated: 2023/04/11 18:53:26 by jintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DISPLAY_FILE_H 
#define DISPLAY_FILE_H

#include <unistd.h> /* Declaring the unix standard header file */
#include <fcntl.h>  /* Constructs that refer to file control */
int		rd_cl(char *arg);
void	ft_putstr(char *str);

#endif