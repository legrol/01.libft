/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-04-19 09:18:23 by rdel-olm          #+#    #+#             */
/*   Updated: 2024-04-19 09:18:23 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The ft_puchar_fd() function sends the character 'c' to the specified 
 * file descriptor.
 *  
 * @param char c    The character to send.
 * @param int fd    The file descriptor to write to.
 *     
 * return Void.
 * 
*/

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
