/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-04-19 09:03:22 by rdel-olm          #+#    #+#             */
/*   Updated: 2024-04-19 09:03:22 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

/**
 * The ft_itoa() function using malloc(3), generate a string that represents
 * the integer value received as an argument. Negative numbers have to be 
 * managed.
 *  
 * @param int n      The number to convert.
 *      
 * return The string that represents the number. 
 * NULL if memory reservation fails.
 * 
*/

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

char	*ft_strdup(const char *s)
{
	char	*str;
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(s);
	str = (char *) malloc((j + 1) * sizeof(char));
	if (str == NULL)
		return (0);
	while (s[i] != '\0')
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

static unsigned int	count_chr(int n)
{
	unsigned int	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		count++;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char			*str;
	unsigned int	totalchr;
	unsigned int	number;

	totalchr = count_chr(n);
	str = (char *) malloc((totalchr + 1) * sizeof(char));
	if (!str)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		number = -n;
	}
	else
		number = n;
	if (number == 0)
		str[0] = '0';
	str[totalchr] = '\0';
	while (number != 0)
	{
		str[totalchr -1] = (number % 10) + '0';
		number = number / 10;
		totalchr--;
	}
	return (str);
}

int	main(void)
{
	int	number;

	number = -25689;
	printf("%s", ft_itoa(number));
	return (0);
}
