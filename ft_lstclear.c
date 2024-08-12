/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-04-22 09:03:45 by rdel-olm          #+#    #+#             */
/*   Updated: 2024/04/22 12:11:14 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

/**
 * The ft_lstclear() function delete and free the given 'lst' node and all
 * consecutive of that node, using the function 'del' and free(3).
 * In the end, the pointer to the list must be NULL.
 * 
 * @param t_list **lst          The address of a pointer to a node.
 * @param void (*del)(void *)   A pointer to function used to delete the 
 *                              content of a node.  
 * 
 * return Void.
 * 
*/

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!lst || !del)
		return ;
	if (lst)
	{
		while (*lst)
		{
			tmp = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = tmp;
		}
	}
}
