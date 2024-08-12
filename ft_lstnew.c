/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdel-olm <rdel-olm@student.42malaga.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-04-22 08:59:37 by rdel-olm          #+#    #+#             */
/*   Updated: 2024/04/22 11:13:11 by rdel-olm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

/**
 * The ft_lstnew() function create a new node using malloc(3). The member
 * variable 'content' is initialized with the content of the 'content' 
 * parameter. The variable 'next', with NULL.. 
 * 
 * @param void *content The content with wich to create the node.
 * 
 * return The new node.
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

int	main(void)
{
	char	*content;
	t_list	*result;

	content = "CONTENT.";
	result = ft_lstnew((void *)content);
	printf("The content is %s\n", (char *)result->content);
	printf("The next is %zu", result->next);
	return (0);
}
