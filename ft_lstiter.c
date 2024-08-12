/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-04-22 09:04:04 by rdel-olm          #+#    #+#             */
/*   Updated: 2024/04/22 12:13:40 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

/**
 * The ft_lstiter() function iterates the list 'lst' and applies the function
 * 'f' on the content of each node.
 * 
 * @param t_list *lst       A pointer to the first node.
 * @param void (*f)(void *) A pointer to the function that each node will use.
 *  
 * return Void.
 * 
*/

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
