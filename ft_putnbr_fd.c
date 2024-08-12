/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-04-19 09:45:25 by rdel-olm          #+#    #+#             */
/*   Updated: 2024-04-19 09:45:25 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/**
 * The ft_putnbr_fd() function sends the number 'n' to the given file 
 * descriptor.
 *  
 * @param int n     The number to send.
 * @param int fd    The file descriptor over to write to.
 *     
 * return Void.
 * 
*/

void	ft_putnbr_fd(int n, int fd)
{
	int	digit;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
	}
	else if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
		ft_putnbr_fd(n, fd);
	}
	else if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
	{
		digit = (n + 48);
		write(fd, &digit, 1);
	}
}

int	main(void)
{
	int	number;

	number = -2687;
	ft_putnbr_fd(number, 1);
	return (0);
}
