/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utilities.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jintan <jintan@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 23:33:55 by jintan            #+#    #+#             */
/*   Updated: 2023/04/30 23:33:55 by jintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Declaring the library function header */
#include "../incs/ft_printf.h"

/* Used for calloc */
#include <stdint.h>

/* 
Basically this is just the function that I have copied and paste into
this source file from my libft project 
*/

/*
Purpose: 
String Character
Used to search for the first occurrence of a specified character in a given
string.

Input:
Takes two arguments 
Characters are represented as integers, so the function can be called 
with a character literal as the second argument.
const char s: a pointer to the string to be searched
int c: the character to be searched for

Output:
Returns a pointer to the first occurence of the character 'c' in the string
's' or NULL if the character is not found

Explanation:
We iterate through each character in the string, compares each character to
the character,c and return a pointer to the current character if they match.
If no character c is found, return NULL
*/

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
		{
			return ((char *)&s[i]);
		}
		i++;
	}
	if ((char)c == s[i])
	{
		return ((char *)&s[i]);
	}
	return (NULL);
}

/*
Purpose: 
Counting the length of the string

Input:
str: A pointer to a string

Output:
The counter (length of the string)
*/

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

/* 
Purpose:
Used to set a block of memory to zero

Input:
dst - An existing object that you want to fill with zeroes.
n - the number of bytes to be filled

Output:
sets the first n bytes of thememory area starting at dest to zero/NULL.

Explanation:
The function sets the first part of an object to null bytes 
bzero() function erases the data in the n bytes of the memory starting at the 
location pointed to by s, by writing zeros (bytescontaining '\0') to that area

bzer0() function in general has been deprecated in favour of 'memset'

size_t is an unsigned integer data type that is guaranteed to be 
able to hold the size of any object that can be created in C. 
It is commonly used in C programming to represent sizes 
and counts of objects. 

Basically just iterates over the memory area, setting each byte to the null
character
*/

static void	ft_bzero(void *dest, size_t n)
{
	size_t	i;
	char	*pointer_dest;

	i = 0;
	pointer_dest = dest;
	while (i < n)
	{
		pointer_dest[i] = '\0';
		i++;
	}
}

/* 
Purpose:
The calloc function allocates a block of memory for an array of count 
elements, each of which has a size of size bytes. 
It initializes the memory block to zero.

Input:
size_t count: The number of elements to allocate memory for.
size_t size: The size of each element in bytes

Output:
Pointer to the allocated memory block that has been initialised with zeros or
NULL if the allocation fails.

Explanation & Thought Process:
size_t is an unsigned integer type used for representing the size of objects
in memory. Commonly used in functions and data structures that deal with 
memory allocation and manipulation.

The declaration in this function is to ensure that the function is consistent
with other memory-related functions and can handle objects of any size. It
also helps us to avoid issues related to integer overlfow and underflow.
*/

static void	*ft_calloc(size_t count, size_t size)
{
	void		*result;
	size_t		total_size;

	total_size = count * size;
	result = malloc(total_size);
	if (size != 0 && count > SIZE_MAX / size)
	{
		return (NULL);
	}
	if (result == NULL)
	{
		return (NULL);
	}
	ft_bzero(result, total_size);
	return (result);
}

/*
Purpose:
Takes an unsigned long long integer num and a character array base
which represents the base of the number system. It will return the 
length of the string representation of num in the given base

Input:
num: unsigned long long integer
base: a character array

Output:
len: The length of the string

Explanation:
1) The function will find the length of the string (base string) 
first.
2) The while loop will then keep on dividing num by base len until
num is less than base len. Len will of course be incremented in the
process.
*/

static size_t	ft_base_len(unsigned long long num, char *base)
{
	size_t				len;
	unsigned long long	base_len;

	len = 1;
	base_len = ft_strlen(base);
	while (num >= base_len)
	{
		num /= base_len;
		len++;
	}
	return (len);
}

/*
Purpose:
Takes an unsigned long long integer, num and a base in the form
of a character array (base). It will then convert the given number
to a string representation in the given base and returns a newly
allocated string.

Input:
num: unsigned long long integer
base: a character array

Output:
str: A pointer to the newly allocated string representing the 
input unsigned integer (num) converted to a string with the 
gievn 'base'

Explanation:
1) The function first calculates the length of the resulting string 
by calling the ft_base_len function, passing in num and base.
2) Memory will then be allocated and it will check whether memory
allocation is successful or not (num_len + 1) is to include the
null terminator
3) It then enters a loop that iterates over the length of the string. 
Inside the loop, it decrements the length of the string by one, 
sets the value at the current position of the string to the character 
in the base array corresponding to the remainder of num divided by the 
length of the base, and then divides num by the length of the base. 
This process is repeated until the length of the string is zero.
4) Then it returns the pointer to the string
*/
char	*ft_itoa_base(unsigned long long num, char *base)
{
	int		num_len;
	int		base_len;
	char	*str;

	num_len = ft_base_len(num, base);
	base_len = ft_strlen(base);
	str = ft_calloc((num_len + 1), sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	while (num_len)
	{
		num_len = num_len - 1;
		str[num_len] = base[num % base_len];
		num /= base_len;
	}
	return (str);
}

/*
Purpose: 
Just to create a new string that is a duplicate of the input string

Input:
s: The pointer to the string,s 

Output:
dup_str : returns the duplicated string

Explanation:
The function first determines the length of the input string using 
the ft_strlen() function and assigns it to the variable len.
The function then allocates memory for a new string of size (len + 1) 
using the malloc() function. The "+1" is to account for the 
null-terminator at the end of the string.
If the allocation of memory fails, the function returns NULL.
If the allocation succeeds, the function then copies the contents of 
the input string to the new string character by character using 
a while loop. The loop iterates until it reaches the null-terminator 
at the end of the input string.
Finally, the function adds a null-terminator to the end of the new 
string and returns a pointer to the newly allocated string.
*/

char	*ft_strdup(const char *s)
{
	char	*dup_str;
	size_t	len;

	len = ft_strlen(s);
	dup_str = malloc((len + 1) * sizeof(char));
	if (dup_str == NULL)
	{
		return (NULL);
	}
	len = 0;
	while (s[len])
	{
		dup_str[len] = s[len];
		len++;
	}
	dup_str[len] = '\0';
	return (dup_str);
}

/*
Purpose:
Takes two pointer to the input string (s1 and s2) and concatenates them
to form a new string

Input:
s1: A pointer to the first string
s2: A pointer to the second string

Output:
str: The concatenated string

Explanation:
Basically just concatenate two strings together
*/

char    *ft_strjoin(char const *s1, char const *s2)
{
    char    *str;
    size_t  i;
    size_t  j;

    if (s1 == NULL || s2 == NULL)
        return (NULL);
    str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
    if (str == NULL)
        return (NULL);
    i = 0;
    while (s1[i])
    {
        str[i] = s1[i];
        i++;
    }
    j = 0;
    while (s2[j])
    {
        str[i + j] = s2[j];
        j++;
    }
    str[i + j] = '\0';
    return (str);
}