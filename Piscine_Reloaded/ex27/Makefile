# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jintan <jintan@student.42kl.edu.my>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/11 19:20:12 by jintan            #+#    #+#              #
#    Updated: 2023/04/11 19:20:12 by jintan           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRC = ./ft_display_file.c

OUTPUT = ./ft_display_file.o

SRCH = ft_display_file.h

# Specifies that the program should be compiled when make is run with no 
# arguments
all: $(NAME)

# -I specifies that the directory contains a header file
$(NAME):
	gcc -Wall -Werror -Wextra -I ./  $(SRCH) $(SRC) -o $(NAME) 	

# removes the object file specified in "Output"
clean:
	rm -f $(OUTPUT)

# Removes the executable file specified in 'NAME' as well as the object file
fclean: clean
	rm -f $(NAME)

# targets specifies that the 'fclean' target should be run first, followed by the 
# all target
re: fclean all