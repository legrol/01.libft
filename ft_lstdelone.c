/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-04-22 09:03:27 by rdel-olm          #+#    #+#             */
/*   Updated: 2024/04/22 12:08:34 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

/**
 * The ft_lstdelone() function takes an 'lst' node as a parameter and 
 * releases the memory of the content using the 'del' function given as a 
 * parameter, in addition to releasing the node. The 'next' memory should not
 * be freed.
 * 
 * @param t_list *lst           The node to release.
 * @param void (*del)(void *)   A pointer to the function used to release 
 * 								the	content of the node.
 *  
 * return Void.
 * 
*/

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	(del)(lst->content);
	free(lst);
	lst = NULL;
}
