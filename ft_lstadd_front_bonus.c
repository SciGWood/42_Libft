/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 14:27:30 by gdetourn          #+#    #+#             */
/*   Updated: 2023/10/16 15:37:21 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Function name 	ft_lstadd_front
	Prototype 		void ft_lstadd_front(t_list **lst, t_list *new);
	Turn in files 	-
	Parameters 		lst: The address of a pointer to the first link of a list.
			new: The address of a pointer to the node to be added to the list.
	Return value 	None
	External functs. None
	Description 	Adds the node ’new’ at the beginning of the list.*/

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!*lst)
		new->next = NULL;
	new->next = *lst;
	*lst = new;
}
/*#include <stdio.h>

int	print_list(t_list *lst)
{
	t_list	*tmp;

	tmp = lst;
	while (tmp)
	{
		printf("[%s]\n", (char *)tmp->content);
		tmp = tmp->next;
	}
	return (0);
}

int	main(void)
{
	t_list	*lst;
	t_list	*new;
	t_list	*tmp;
	char	*str;
	char	*str2;

	str = ft_strdup("Start");
	str2 = ft_strdup("End");
	lst = ft_calloc(1, sizeof(t_list));
	lst->content = str;
	int	i = 0;
	tmp = lst;
	while (i < 10)
	{
		tmp->next = ft_lstnew(ft_itoa(i));
		tmp = tmp->next;
		i++;
	}
	print_list(lst);
	new = ft_calloc(1, sizeof(t_list));
	new->content = str2;
	printf("\n\n\n");
	print_list(new);
	ft_lstadd_front(&lst, new);
	printf("\n\n\n");
	print_list(lst);
	printf("\n\n\n");
	while (lst)
	{
		tmp = lst;
		lst = lst->next;
		tmp->next = NULL;
		free(tmp);
	}
	free(str);
	free(str2);
}

	t_list	*lst = NULL;
	t_list	*lstnew = NULL;
	t_list	*tmp;

	lst = ft_lstnew("Hello");
	lst->next = lst;
	lst = ft_lstnew("Wonderful");
	lst->next = lst;
	lst = ft_lstnew("World");
	print_list(lst);
	lstnew = ft_lstnew(ft_strdup("First"));
	ft_lstadd_front(&lst, lstnew);
	print_list(lst);
	while (lst)
	{
		tmp = lst;
		lst = lst->next;
		tmp->next = NULL;
		free(tmp->content);
	}
	return (0);
}*/
