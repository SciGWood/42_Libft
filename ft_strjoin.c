/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 14:47:32 by gdetourn          #+#    #+#             */
/*   Updated: 2023/12/19 09:35:24 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Function name 	ft_strjoin
	Prototype 		char *ft_strjoin(char const *s1, char const *s2);
	Turn in files 	-
	Parameters 		s1: The prefix string.
					s2: The suffix string.
	Return value 	The new string.
					NULL if the allocation fails.
	External functs. malloc
	Description 	Allocates (with malloc(3)) and returns a new string, which 
	is the result of the concatenation of ’s1’ and ’s2’.*/

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str1;
	char	*str2;
	char	*newstr;
	int		total_len;

	str1 = (char *)s1;
	str2 = (char *)s2;
	total_len = ft_strlen(str1) + ft_strlen(str2);
	newstr = malloc(sizeof(char) * (total_len + 1));
	if (newstr == NULL)
		return (NULL);
	if (total_len == 0)
	{
		free (newstr);
		return (ft_strdup(""));
	}
	ft_strlcpy(newstr, str1, (ft_strlen(str1) + 1));
	ft_strlcat(newstr, str2, (total_len + 1));
	return (newstr);
}
