/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-04-16 07:51:42 by rdel-olm          #+#    #+#             */
/*   Updated: 2024-04-16 07:51:42 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

/**  
 * Ft_memmove() copies n bytes from memory area src to memory area dest when 
 * dest is greater then src. 
 * The memory areas may overlap: copying takes place as though the bytes in src 
 * are first copied into a temporary array that does not overlap src or dest, and
 * the bytes are then copied from the temporary array to dest.  
 * 
 * If the destination pointer is greater than the source pointer, then copy the 
 * source pointer to the destination pointer in reverse order. Otherwise, copy 
 * the source pointer to the destination pointer in the normal order.
 * 
 * @param void *dest This is the destination array where the content is to be 
 * copied, type-casted to a pointer.
 *
 * @param const void *src The source string.
 * @param size_t n The number of bytes to be copied.
 * 
 * @return A pointer to the destination string.
 * 
 */

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			len;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	len = n;
	if ((!d && !s) || len <= 0)
		return (dest);
	if (s < d)
	{
		s = s + (len - 1);
		d = d + (len - 1);
		while (len-- > 0)
			*d-- = *s--;
		return (dest);
	}
	while (len-- > 0)
		*d++ = *s++;
	return (dest);
}

int	main(void)
{
	char	*str1;
	char	*str2;
	int		number;

	str1 = "autoestopista";
	str2 = "galactico";
	number = 8;
	printf("%s\n", ft_memmove(str1, str2, number));
	printf("%s\n", memmove(str1, str2, number));
}
