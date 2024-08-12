/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-04-16 07:50:45 by rdel-olm          #+#    #+#             */
/*   Updated: 2024-04-16 07:50:45 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

/**
 * Ft_isprint() checks if the integer passed as a parameter is a
 * printable ascii character including space. 
 * 
 */

int	ft_isprint(int c)
{
	if (c >= 32 && c < 127)
		return (1);
	else
		return (0);
}

int	main(void)
{
	char	insert;
	int		verifyisprint;
	char	typetext;

	printf("Write something: ");
	scanf("%c", &insert);
	verifyisprint = ft_isprint(insert);
	if (verifyisprint == 1)
		typetext = 'Y';
	else
		typetext = 'N';
	printf("Is the entered text an printable ascii character?: %c\n", typetext);
	return (0);
}
