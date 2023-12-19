/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 10:34:44 by gdetourn          #+#    #+#             */
/*   Updated: 2023/10/13 10:42:04 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Function name 	ft_lstdelone
	Prototype 		void ft_lstdelone(t_list *lst, void (*del)(void*));
	Turn in files 	-
	Parameters 		lst: The node to free.
				del: The address of the function used to delete the content.
	Return value 	None
	External functs. free
	Description 	Takes as a parameter a node and frees the memory of the 
				node’s content using the function ’del’ given as a parameter 
				and free the node. The memory of ’next’ must not be freed.*/

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	(*del)(lst->content);
	free(lst);
}
