/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-04-16 07:53:50 by rdel-olm          #+#    #+#             */
/*   Updated: 2024-04-16 07:53:50 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

/**
 * The strdup() function returns a pointer to a new string which is
 * a duplicate of the string s. Memory for the new string is obtained
 * with malloc(3), and can be freed with free(3).
 * 
 * @param const char *s The string to duplicate.
 * 
 * returns a pointer to the duplicated string.  
 * It returns NULL if insufficient memory was available, with errno 
 * set to indicate the error.
 * 
*/

char	*ft_strdup(const char *s)
{
	char	*str;
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(s);
	str = (char *) malloc((j + 1) * sizeof(char));
	if (str == NULL)
		return (0);
	while (s[i] != '\0')
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

int	main(void)
{
	char	*str0;

	str0 = "autoestopista";
	printf("%s\n", ft_strdup(str0));
	printf("%s\n", strdup(str0));
	return (0);
}
