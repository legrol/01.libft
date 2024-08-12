/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-04-16 07:52:47 by rdel-olm          #+#    #+#             */
/*   Updated: 2024-04-16 07:52:47 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

/**
 * The strnstr() function locates the first	occurrence of the  null-terminated
 * string to_find in the string str, where not more than n characters are
 * searched. Characters that appear after a `\0' character are not searched.
 *  * 
 * @param const char *str The string to search in.
 * @param const char *to_find The string to find.
 * @param size_t n The maximum number of characters to search in str.
 * 
 * return If to_find is an empty string or null, str is returned; 
 *        if to_find occurs nowhere in str, NULL is returned; 
 *        otherwise a pointer to the first character of the first 
 *        occurrence of to_find is returned.
 * 
*/

char	*ft_strnstr(const char *str,	const char *to_find, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*to_find == '\0' || to_find == NULL)
		return ((char *)str);
	while (str[i] != '\0' && i < n)
	{
		j = 0;
		while (to_find[j] == str[i + j] && i + j < n)
		{
			if (to_find[j + 1] == '\0')
				return ((char *)str + i);
			j++;
		}
		i++;
	}
	return (0);
}

int	main(void)
{
	size_t	number;
	char	*str1;
	char	*str2;

	number = 20;
	str1 = "autoestopistagalactico";
	str2 = "estopista";
	printf("%s\n", ft_strnstr(str1, str2, number));
	printf("%s\n", strnstr(str1, str2, number));
}
