/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 10:43:12 by gdetourn          #+#    #+#             */
/*   Updated: 2023/10/13 11:05:14 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Function name 	ft_lstclear
	Prototype 		void ft_lstclear(t_list **lst, void (*del)(void*));
	Turn in files 	-
	Parameters 		lst: The address of a pointer to a node.
		del: The address of the function used to delete the content of the node.
	Return value 	None
	External functs. free
	Description 	Deletes and frees the given node and every successor of 
				that node, using the function ’del’ and free(3).
				Finally, the pointer to the list must be set to NULL.*/

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone((*lst), del);
		(*lst) = tmp;
	}
}
