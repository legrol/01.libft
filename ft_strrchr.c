/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-04-16 07:52:32 by rdel-olm          #+#    #+#             */
/*   Updated: 2024-04-16 07:52:32 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

/**
 * The ft_strchr() function returns a pointer to the last occurrence 
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
 * return A pointer to the last ocurrence of the character in the string s.
*/

char	*ft_strrchr(const char *s, int c)
{
	char	*last;

	last = NULL;
	while (*s != '\0')
	{
		if (*s == (char) c)
			last = (char *) s;
		s++;
	}
	if ((char) c == '\0')
		return ((char *) s);
	return (last);
}

int	main(void)
{
	int		to_find;
	char	*str;

	to_find = 'i';
	str = "autoestopistagalactico";
	printf("%s\n", ft_strrchr(str, to_find));
	printf("%s\n", strrchr(str, to_find));
}
