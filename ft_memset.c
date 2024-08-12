/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-04-16 07:51:54 by rdel-olm          #+#    #+#             */
/*   Updated: 2024-04-16 07:51:54 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

/**
 * Ft_memset() takes a pointer to a memory location, a value to set, 
 * and the number of bytes to set, and returns a pointer to the 
 * memory location.
 * 
 * @param void *s This is the pointer to the memory area to be filled.
 * @param int c   The value to be set
 * @param size_t n The number of bytes to be set to the value c.
 * 
 * @return A pointer to the memory area s.
 * 
 */

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

int	main(void)
{
	char	*str;
	int		number;
	size_t	len;

	str = "autoestopista";
	number = 52;
	len = 7;
	printf("%s\n", ft_memset(str, number, len));
	printf("%s\n", memset(str, number, len));
}
