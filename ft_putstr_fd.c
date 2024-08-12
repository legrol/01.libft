/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-04-19 09:18:20 by rdel-olm          #+#    #+#             */
/*   Updated: 2024-04-19 09:18:20 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The ft_putstr_fd() function sends the string 's' to the specified 
 * file descriptor.
 *  
 * @param char *s   The string to send.
 * @param int fd    The file descriptor over to write to.
 *     
 * return Void.
 * 
*/

void	ft_putstr_fd(char *s, int fd)
{
	if (s)
		write(fd, s, ft_strlen(s));
}
