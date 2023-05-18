# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ex08.py                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jintan <jintan@student.42kl.edu.my>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/13 17:33:25 by jintan            #+#    #+#              #
#    Updated: 2023/04/13 17:33:25 by jintan           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Use the random module to randomly pick an item from 
# a list

# Use the random module to display a random number 
# from 0 to 100

import random
flowers = ['rose','tulip','lily']
print(random.choice(flowers))
print(random.randint(1,100))