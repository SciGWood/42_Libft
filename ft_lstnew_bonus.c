/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 14:12:56 by gdetourn          #+#    #+#             */
/*   Updated: 2023/10/16 13:17:00 by gdetourn         ###   ########.fr       */
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
/*#include <stdio.h>

int	print_list(t_list *lst)
{
	while (lst)
	{
		printf("[%s]\n", (char *)lst->content);
		lst = lst->next;
	}
	return (0);
}

int	main(void)
{
	t_list	*lst1;
	t_list	*lst2;
	t_list	*lst3;
	t_list	*lst4;

	lst1 = ft_lstnew(ft_strdup("Hello"));
	lst2 = ft_lstnew(ft_strdup("Wonderful"));
	lst3 = ft_lstnew(ft_strdup("World"));
	lst4 = ft_lstnew(ft_strdup(""));
	lst1->next = lst2;
	lst2->next = lst3;
	lst3->next = lst4;
	print_list(lst1);
	free(lst1->content);
	free(lst1);
	free(lst2->content);
	free(lst2);
	free(lst3->content);
	free(lst3);
	free(lst4->content);
	free(lst4);
	return (0);
}*/
