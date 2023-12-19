/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 14:38:31 by gdetourn          #+#    #+#             */
/*   Updated: 2023/10/13 10:01:36 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Function name 	ft_lstsize
	Prototype 		int ft_lstsize(t_list *lst);
	Turn in files 	-
	Parameters 		lst: The beginning of the list.
	Return value 	The length of the list
	External functs. None
	Description 	Counts the number of nodes in a list.*/

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		size++;
	}
	return (size);
}
