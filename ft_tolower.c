/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-04-16 07:54:15 by rdel-olm          #+#    #+#             */
/*   Updated: 2024-04-16 07:54:15 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

/**
 * The ft_tolower() function converts an uppercase character to lowercase.
 * 
*/

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

int	main(void)
{
	char	letterinsert;
	char	letterlowercase;

	printf("Write a letter: ");
	scanf("%c", &letterinsert);
	letterlowercase = ft_tolower(letterinsert);
	printf("The lowercase letter is: %c\n", letterlowercase);
	return (0);
}
