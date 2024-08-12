/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-04-16 07:53:21 by rdel-olm          #+#    #+#             */
/*   Updated: 2024-04-16 07:53:21 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

/**
 * Ft_strlcpy() copies up to size - 1 characters from the NUL-terminated 
 * string src to dest, NUL-terminating the result.
 * 
 * @param char *dest This is the destination array where the content is to 
 * 					 be copied, type-casted to a pointer.
 * @param const char *src The source string.
 * @param size_t size The number of bytes to be copied.
 *  
*/

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t			i;
	unsigned int	count;

	i = 0;
	count = 0;
	while (src[count] != '\0')
		count++;
	if (size < 1)
		return (count);
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (count);
}

int	main(void)
{
	size_t		destsize;
	char		*dst;
	const char	*src;

	destsize = 3;
	dst = "Hello";
	src = "world";
	printf("%zu\n", ft_strlcpy(dst, src, destsize));
	printf("%s\n", dst);
	printf("%zu\n", strlcpy(dst, src, destsize));
}
