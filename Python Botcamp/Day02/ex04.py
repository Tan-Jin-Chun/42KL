# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ex04.py                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jintan <jintan@student.42kl.edu.my>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/13 17:32:45 by jintan            #+#    #+#              #
#    Updated: 2023/04/13 17:32:45 by jintan           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Create a function that performs mathematical operations 
# such as multiplication, division, addition and subtraction (* 
# / + -) on two numbers passed as arguments and returns the 
# result. Function should accept 3 arguments which are:
def calculate(number1, operator, number2):
    if operator == '+':
        return (number1 + number2)
    elif operator == '-':
        return (number1 - number2)
    elif operator == '*':
        return (number1 * number2)
    elif operator == '/':
        return (number1 / number2)
    else:
        return ("Invalid Operator")
    
print(calculate(10,"+",10))
print(calculate(10,"-",10))
print(calculate(10,"*",10))
print(calculate(10,"/",10))