/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-04-16 07:53:59 by rdel-olm          #+#    #+#             */
/*   Updated: 2024-04-16 07:53:59 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

/**
 * The ft_strchr() function returns a pointer to the first occurrence 
 * of the character c (converted to a char) in the string s.
 * 
 * The ft_strchr() function return a pointer to the matched character 
 * or NULL if the character is not found. The terminating null byte 
 * is considered part of the string, so that if c is specified as 
 * '\0', this function return a pointer to the terminator.
 * 
 * @param const char *s The string for search.
 * @param int c The character to search for.
 * 
 * return A pointer to the first ocurrence of the character in the string s.
*/

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char) c)
			return ((char *) s);
		else
			s++;
	}
	if ((char) c == '\0')
		return ((char *)s);
	return (0);
}

int	main(void)
{
	int		to_find;
	char	*str;

	to_find = 'i';
	str = "autoestopistagalactico";
	printf("%s\n", ft_strchr(str, to_find));
	printf("%s\n", strchr(str, to_find));
}
