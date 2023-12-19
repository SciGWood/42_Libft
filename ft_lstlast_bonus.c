/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 15:01:39 by gdetourn          #+#    #+#             */
/*   Updated: 2023/10/13 09:23:40 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Function name 	ft_lstlast
	Prototype 		t_list *ft_lstlast(t_list *lst);
	Turn in files 	-
	Parameters 		lst: The beginning of the list.
	Return value 	Last node of the list
	External functs. None
	Description 	Returns the last node of the list.*/

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
