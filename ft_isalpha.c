/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-04-16 07:50:02 by rdel-olm          #+#    #+#             */
/*   Updated: 2024-04-16 07:50:02 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

/**
 * Ft_isalpha() checks if the character passed as a parameter is 
 * an alphabetic character.
 * 
 * It is equivalent to (isupper(c) || islower(c)).
 * 
 */

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}

int	main(void)
{
	char	insert;
	int		verifyisalpha;
	char	typetext;

	printf("Write something: ");
	scanf("%c", &insert);
	verifyisalpha = ft_isalpha(insert);
	if (verifyisalpha == 1)
		typetext = 'Y';
	else
		typetext = 'N';
	printf("Is the entered text an alphabetic character?: %c\n", typetext);
	return (0);
}
