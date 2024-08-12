/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-04-16 07:49:12 by rdel-olm          #+#    #+#             */
/*   Updated: 2024-04-16 07:49:12 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

/**
 * The calloc() function allocates memory for an array of 
 * count elements of size bytes each and returns a pointer 
 * to the allocated memory. The memory is set to zero. 
 * If count or size is 0, then calloc() returns either NULL, 
 * or a unique pointer value that can later be successfully passed to free().
 * 
 * @param size_t count The number of elements to be allocated.
 * @param size_t size The size of the memory block, in bytes.
 *  
 * return a pointer to the allocated memory that is suitably aligned 
 * for any kind of variable. On error, these functions return NULL. 
 * NULL may also be returned by a successful call to calloc() with 
 * count or size equal to zero.
 * 
*/

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = 0;
		i++;
	}
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = (void *) malloc(count * size);
	if (ptr == NULL)
		return (0);
	else
	{
		ft_bzero(ptr, count * size);
		return (ptr);
	}
}

int	main(void)
{
	size_t	count;
	size_t	size;

	count = 3;
	size = 5;
	printf("%s\n", calloc(count, size));
	printf("%s\n", ft_calloc(count, size));
}
