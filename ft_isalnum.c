/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-04-16 07:49:45 by rdel-olm          #+#    #+#             */
/*   Updated: 2024-04-16 07:49:45 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

/**
 * Ft_isalnum() checks if the integer passed as a parameter is an alphabetic 
 * or numerical character.
 * 
 * It is equivalent to (isalpha(c) || isdigit(c)).
 * 
 */

int	ft_isalnum(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122) || (c >= 48 && c <= 57))
		return (1);
	else
		return (0);
}

int	main(void)
{
	char	insert;
	int		verifyisalnum;
	char	typetext;

	printf("Write something: ");
	scanf("%c", &insert);
	verifyisalnum = ft_isalnum(insert);
	if (verifyisalnum == 1)
		typetext = 'Y';
	else
		typetext = 'N';
	printf("Is the entered text alphanumeric?: %c\n", typetext);
	return (0);
}
