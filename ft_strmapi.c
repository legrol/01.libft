/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-04-19 09:10:45 by rdel-olm          #+#    #+#             */
/*   Updated: 2024/04/22 09:38:38 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

/**
 * The ft_strmapi() function, to each character of the string 's', apply the
 * function 'f' giving as parameters the index of each character within 's' 
 * and the character itself. Generates a new string with the result of 
 * successive use of 'f'.
 *  
 * @param char const *s                 The string to iterate.
 * @param char (*f)(unsigned int, char) The function to apply on each character.
 *     
 * return The string created after the correct use of 'f' over each character. 
 * NULL if memory reservation fails.
 * 
*/

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	ft_uppercase(unsigned int i, char c)
{
	if (i % 2 == 0)
		return (ft_toupper(c));
	else
		return (ft_tolower(c));
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;
	int				totalchr;

	i = 0;
	if (!s)
		return (NULL);
	totalchr = ft_strlen(s);
	str = (char *) malloc((totalchr + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = 0;
	return (str);
}

int	main(void)
{
	char			*str1;
	unsigned int	i;
	char			c;

	str1 = "HelloWorld";
	printf("%s", ft_strmapi(str1, ft_uppercase));
	return (0);
}

/*char my_func(unsigned int i, char str1)
{
    printf("My inner function: index = %d and %c\n", i, str1);
 	return (str1 - 32); 
}

int main(void)
{
 	char str[10] = "hello.";
 	printf("The result is %s\n", str);
 	char *result = ft_strmapi(str, my_func);
 	 printf("The result is %s\n", result);
 	return 0;
}*/
