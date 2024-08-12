/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-04-16 07:51:29 by rdel-olm          #+#    #+#             */
/*   Updated: 2024-04-16 07:51:29 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

/** Copies n bytes from memory area src to memory area dest.
 *  The memory areas must not overlap. Use memmove(3) if 
 *  the memory areas do overlap.
 * 
 * @param void *dest The destination string.
 * @param const void *src The source string.
 * @param size_t n The number of bytes to copy.
 * 
 * @return A pointer to the destination string.
*/

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	i = 0;
	d = (char *)dest;
	s = (char *)src;
	if (!dest && !src)
		return (0);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

int	main(void)
{
	char	*str1;
	char	*str2;
	int		i;

	str1 = "Hola";
	str2 = "Mundo";
	i = 2;
	printf("%s\n", ft_memcpy(str1, str2, i));
	printf("%s\n", memcpy(str1, str2, i));
	return (0);
}
