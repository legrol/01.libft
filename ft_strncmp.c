/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-04-16 07:53:01 by rdel-olm          #+#    #+#             */
/*   Updated: 2024-04-16 07:53:01 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

/**
 * The ft_strncmp() compares the first (at most) n bytes of the two strings
 * s1 and s2.
 *
 * @param const char *s1 The first string to compare.
 * @param const char *s2 The second string to compare against s1.
 * @param size_t n number of characters to examine.
 * 
 * return an integer less than, equal to, or greater than zero if s1 
 * (or the first n bytes thereof) is, respectively, less than, equal to, 
 * or greater than s2.
 *
*/

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] != '\0' || s2[i] != '\0') && (i < n))
	{
		if ((unsigned char) s1[i] > (unsigned char) s2[i])
			return (1);
		else if ((unsigned char) s1[i] < (unsigned char) s2[i])
			return (-1);
		else
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
	str1 = "autoestopistamalaga";
	str2 = "autoestopistagalactico";
	printf("%i\n", ft_strncmp(str1, str2, number));
	printf("%i\n", strncmp(str1, str2, number));
}
