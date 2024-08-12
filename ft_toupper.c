/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-04-16 07:54:24 by rdel-olm          #+#    #+#             */
/*   Updated: 2024-04-16 07:54:24 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

/**
 * The ft_toupper() function converts an lowercase character to uppercase.
 * 
*/

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

int	main(void)
{
	char	letterinsert;
	char	letteruppercase;

	printf("Write a letter: ");
	scanf("%c", &letterinsert);
	letteruppercase = ft_toupper(letterinsert);
	printf("The capital letter is: %c\n", letteruppercase);
	return (0);
}
