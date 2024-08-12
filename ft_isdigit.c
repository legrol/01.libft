/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-04-16 07:50:31 by rdel-olm          #+#    #+#             */
/*   Updated: 2024-04-16 07:50:31 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

/**
 * Ft_isdigit() checks if the integer passed as a parameter 
 * is an numerical character.
 * 
 */

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

int	main(void)
{
	char	insert;
	int		verifyisdigit;
	char	typetext;

	printf("Write something: ");
	scanf("%c", &insert);
	verifyisdigit = ft_isdigit(insert);
	if (verifyisdigit == 1)
		typetext = 'Y';
	else
		typetext = 'N';
	printf("Is the entered text an numerical character?: %c\n", typetext);
	return (0);
}
