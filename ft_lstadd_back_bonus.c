/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 15:23:10 by gdetourn          #+#    #+#             */
/*   Updated: 2023/10/13 10:28:49 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Function name 	ft_lstadd_back
	Prototype 		void ft_lstadd_back(t_list **lst, t_list *new);
	Turn in files	-
	Parameters 		lst: The address of a pointer to the first link of a list.
			new: The address of a pointer to the node to be added to the list.
	Return value 	None
	External functs. None
	Description 	Adds the node ’new’ at the end of the list.*/

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	tmp = *lst;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
}
