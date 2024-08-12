/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-04-16 07:53:41 by rdel-olm          #+#    #+#             */
/*   Updated: 2024-04-16 07:53:41 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

/**
 * The ft_strjoin() function reserve (with malloc(3)) and return a new string, 
 * formed by the concatenation of 's1' and 's2'.
 * 
 * @param char const *s1 The first string.
 * @param char const *s2 The string to add to 's1'.
 * 
 * return The new string. NULL if memory reservation fails.
 * 
*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str3;
	int		totallen;
	int		i;
	int		j;

	totallen = ft_strlen(s1) + ft_strlen(s2);
	i = 0;
	j = 0;
	str3 = (char *) malloc((totallen + 1) * sizeof(char));
	if (!str3)
		return (0);
	while (s1[i] != '\0')
	{
		str3[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		str3[i] = s2[j];
		i++;
		j++;
	}
	str3[i] = '\0';
	return (str3);
}

int	main(void)
{
	char	*ch1;
	char	*ch2;

	ch1 = "Hello";
	ch2 = " World";
	printf("%s", ft_strjoin(ch1, ch2));
	return (0);
}
