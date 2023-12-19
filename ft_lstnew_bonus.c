/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 14:12:56 by gdetourn          #+#    #+#             */
/*   Updated: 2023/12/19 09:33:09 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Function name 	ft_lstnew
	Prototype 		t_list *ft_lstnew(void *content);
	Turn in files 	-
	Parameters 		content: The content to create the node with.
	Return value 	The new node
	External functs. malloc
	Description 	Allocates (with malloc(3)) and returns a new node. 
			The member variable ’content’ is initialized with the value of the 
			parameter ’content’. The variable ’next’ is initialized to NULL.*/

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (new == NULL)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
