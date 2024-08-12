/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-04-19 09:18:26 by rdel-olm          #+#    #+#             */
/*   Updated: 2024-04-19 09:18:26 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The ft_striteri() function, to each character of the string 's', apply 
 * the function 'f' giving as parameters the index of each character within 's'
 * and the address of the character itself, which can be modified if necessary.
 *  
 * @param char *s                           The string to iterate.
 * @param void (*f)(unsigned int, char*)    The function to apply on each 
 *                                          character.
 *     
 * return Void.
 * 
*/

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s)
		return ;
	while (*s)
	{
		f(i, s);
		i++;
		s++;
	}
}
