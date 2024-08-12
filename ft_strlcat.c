/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-04-16 07:53:32 by rdel-olm          #+#    #+#             */
/*   Updated: 2024-04-16 07:53:32 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

/** The strlcat() function concatenate strings. It's designed to be safer, 
 * more consistent, and less error-prone replacements for strncat().
 * Unlike this function, take the full size of the buffer (not just the length) 
 * and guarantee to NUL-terminate the result (as long as there's at least one
 * byte free in dest).
 * This function appends the NUL-terminated string src to the end of dest. 
 * It will append at most size − strlen(dest) − 1 bytes, NUL-terminating the 
 * result.
 * 
 * @param char *dest  This is the destination array where the content is to be 
 * 					  concatenated, type-casted to a pointer.
 * @param char *src   The source string.
 * @param size_t size Position in dest from where src will be concatenated.
 *
 * Return the total lenght of the string. That means the initial length of dest 
 * plus the length of src. While this may seem somewhat confusing, it was done 
 * to make truncation detection simple.   
*/

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	len;

	len = 0;
	while (dest[len] != '\0' && len < size)
		len++;
	i = len;
	while (src[len - i] != '\0' && len + 1 < size)
	{
		dest[len] = src[len - i];
		len++;
	}
	if (i < size)
		dest[len] = '\0';
	return (i + ft_strlen(src));
}

int	main(void)
{
	size_t	destsize;
	char	*dest;
	char	*src;

	destsize = 11;
	dest = "Hola";
	src = " Mundo";
	printf("%zu\n", ft_strlcat(dest, src, destsize));
	printf("%s\n", dest);
	printf("%zu\n", strlcat(dest, src, destsize));
}
