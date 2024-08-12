/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-04-16 07:51:19 by rdel-olm          #+#    #+#             */
/*   Updated: 2024-04-16 07:51:19 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

/**
 * The memcmp() function compares the first n bytes (each
 * interpreted as unsigned char) of the memory areas s1 and s2.
 * 
 * @param const void s1 The first string to compare.
 * @param const void s2 The second string to compare against s1.
 * @param size_t n number of bytes to examine.
 * 
 * returns zero if the two strings are identical, otherwise returns the
 * difference between the first two differing bytes (treated as unsigned char
 * values, so that `\200' is greater than `\0', for example).  
 * Zero-length strings are always identical.
 * 
*/

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned const char	*str1;
	unsigned const char	*str2;
	size_t				i;

	i = 0;
	str1 = (unsigned const char *)s1;
	str2 = (unsigned const char *)s2;
	while (i < n)
	{
		if (*str1 != *str2)
			return ((int)(*str1 - *str2));
		str1++;
		str2++;
		i++;
	}
	return (0);
}

int	main(void)
{
	char	*str1;
	char	*str2;
	int		number;

	str1 = "autoestopista";
	str2 = "autoestoptsta";
	number = 11;
	printf("%i\n", ft_memcmp(str1, str2, number));
	printf("%i\n", memcmp(str1, str2, number));
	return (0);
}
