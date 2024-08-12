/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-04-16 07:50:15 by rdel-olm          #+#    #+#             */
/*   Updated: 2024-04-16 07:50:15 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

/**
 * Ft_isascii() checks if the integer passed as a parameter is
 * an ascii character.
 * 
 */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

int	main(void)
{
	char	insert;
	int		verifyisascii;
	char	typetext;

	printf("Write something: ");
	scanf("%c", &insert);
	verifyisascii = ft_isascii(insert);
	if (verifyisascii == 1)
		typetext = 'Y';
	else
		typetext = 'N';
	printf("Is the entered text an ascii character?: %c\n", typetext);
	return (0);
}
