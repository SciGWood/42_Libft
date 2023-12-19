/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 11:13:22 by gdetourn          #+#    #+#             */
/*   Updated: 2023/12/06 17:39:20 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Function name 	ft_lstmap
	Prototype 
	t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
	Turn in files 	-
	Parameters 		lst: The address of a pointer to a node.
				f: The address of the function used to iterate on the list.
				del: The address of the function used to delete the content of 
				a node if needed.
	Return value 	The new list.
					NULL if the allocation fails.
	External functs. malloc, free
	Description 	Iterates the list ’lst’ and applies the function ’f’ on 
				the content of each node. Creates a new list resulting of the 
				successive applications of the function ’f’. The ’del’ function 
				is used to delete the content of a node if needed.*/

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*tmp;

	if (!lst)
		return (NULL);
	new = ft_lstnew((*f)(lst->content));
	if (!new)
		return (NULL);
	tmp = new;
	lst = lst->next;
	while (lst)
	{
		new->next = ft_lstnew((*f)(lst->content));
		if (new->content == NULL)
		{
			ft_lstdelone(new, del);
			return (0);
		}
		new = new->next;
		lst = lst->next;
	}
	return (tmp);
}
