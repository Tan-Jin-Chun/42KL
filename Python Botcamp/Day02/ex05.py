# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ex05.py                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jintan <jintan@student.42kl.edu.my>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/13 17:32:47 by jintan            #+#    #+#              #
#    Updated: 2023/04/13 17:32:47 by jintan           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Given 3 strings, create a function called check_string that returns 
# “Yes!” if the string starts with the letters “The” and returns “No!” 
# otherwise.

def check_string(str):
    if str.startswith("The"):
        return "Yes!"
    else:
        return "No!"

str1 = 'The'
str2 = 'Thumbs up'
str3 = 'Theatre can be boring'
print(check_string(str1))
print(check_string(str2))
print(check_string(str3))