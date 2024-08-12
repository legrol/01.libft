/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-04-16 07:48:40 by rdel-olm          #+#    #+#             */
/*   Updated: 2024-04-16 07:48:40 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

/** 
 * Ft_bzero() erases the data in the n bytes of the memory starting at the
 * location pointed to by s, by writing zeros (bytes containing '\0') 
 * to that area. 
 *
 *	@param void *s This is the pointer to the memory area to be filled.
 *  @param size_t n The number of bytes to be set to zero. 
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

int	main(void)
{
	char	*s;
	size_t	n;

	s = "paco";
	n = 2;
	printf("%s", bzero(s, n));
}
