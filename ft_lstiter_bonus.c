/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 11:06:27 by gdetourn          #+#    #+#             */
/*   Updated: 2023/10/13 11:24:23 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Function name 	ft_lstiter
	Prototype 		void ft_lstiter(t_list *lst, void (*f)(void *));
	Turn in files 	-
	Parameters 		lst: The address of a pointer to a node.
					f: The address of the function used to iterate on the list.
	Return value 	None
	External functs. None
	Description 	Iterates the list ’lst’ and applies the function ’f’ on 
					the content of each node.*/

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}
