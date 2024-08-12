/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-04-16 07:51:02 by rdel-olm          #+#    #+#             */
/*   Updated: 2024-04-16 07:51:02 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

/**
 * The memchr() function scans the initial n bytes of the memory
 * area pointed to by s for the first instance of c. Both c and the
 * bytes of the memory area pointed to by s are interpreted as
 * unsigned char.
 *   
 * @param const void *s The string to search.
 * @param int c The character to search for.
 * @param size_t n The number of bytes to be searched.
 *  
 * return The address of the first occurence of the character c 
 * in the string s or NULL if the character does not occur in the 
 * given memory area.
 * 
 */

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;
	size_t	i;
	char	l;

	str = (char *)s;
	l = (char)c;
	i = 0;
	while (i < n)
	{
		if (*str == l)
			return (str);
		str++;
		i++;
	}
	return (0);
}

int	main(void)
{
	char	*str;
	int		number1;
	size_t	number2;

	str = "autoestopista";
	number1 = 't';
	number2 = 8;
	printf("%s\n", ft_memchr(str, number1, number2));
	printf("%s\n", memchr(str, number1, number2));
	return (0);
}
