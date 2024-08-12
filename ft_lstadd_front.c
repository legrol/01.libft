/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-04-22 09:00:34 by rdel-olm          #+#    #+#             */
/*   Updated: 2024/04/22 11:29:03 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

/**
 * The ft_lstadd_front() function add the 'new' node to the beginning of the 
 * 'lst' list. 
 * 
 * @param t_list **lst  The address of a pointer to the first node a list.
 * @param t_list *new   A pointer to the node to add to the beginning of the 
 *                      list. 
 *  
 * return Void.
 * 
*/

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *) malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst && !new)
		return ;
	new->next = *lst;
	*lst = new;
}

int	main(void)
{
	char	*content1;
	char	*content2;
	t_list	*my_tlist;
	t_list	*linked_list_item1;
	t_list	*linked_list_item2;

	content1 = "CONTENT1.";
	content2 = "CONTENT2.";
	my_tlist = (t_list *)malloc(sizeof(t_list) * 5);
	linked_list_item1 = ft_lstnew((void *)content1);
	linked_list_item2 = ft_lstnew((void *)content2);
	ft_lstadd_front(&my_tlist, linked_list_item1);
	ft_lstadd_front(&my_tlist, linked_list_item2);
	printf("The result is %s\n", (char *)my_tlist[0].content);
	printf("The result is %s\n", (char *)my_tlist[0].next);
	return (0);
}
