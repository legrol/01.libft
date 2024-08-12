/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-04-16 07:53:10 by rdel-olm          #+#    #+#             */
/*   Updated: 2024-04-16 07:53:10 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

/** 
 * Calculates the length of the string pointed to by s, excluding the 
 * terminating null byte ('\0'). 
 *
 * @param const char *s This is thestring that we are going to find the 
 * length of.
 * 
 * @return The lenght of the string.
 * 
 */

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	main(void)
{
	int		totalength;
	char	str[50];

	printf("Write a word : ");
	scanf("%s", str);
	totalength = ft_strlen(str);
	printf("The lenght of the string '%s' is of %i\n", str, totalength);
	return (0);
}
