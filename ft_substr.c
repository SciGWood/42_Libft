/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 11:28:06 by gdetourn          #+#    #+#             */
/*   Updated: 2023/12/19 09:36:38 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Function name 	ft_substr
	Prototype 		char *ft_substr(char const *s, unsigned int start, 
					size_t len);
	Turn in files 	-
	Parameters 		s: The string from which to create the substring.
					start: The start index of the substring in the string ’s’.
					len: The maximum length of the substring.
	Return value 	The substring.
					NULL if the allocation fails.
	External functs. malloc
	Description 	Allocates (with malloc(3)) and returns a substring from 
					the string ’s’.
					The substring begins at index ’start’ and is of maximum 
					size ’len’.*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	char			*sub;
	unsigned int	i;

	str = (char *)s;
	if (str == NULL)
		return (NULL);
	if (start >= ft_strlen(str))
		return (ft_strdup(""));
	if (len > ft_strlen(&str[start]))
		sub = malloc(sizeof(char) * (ft_strlen(&str[start]) + 1));
	else
		sub = malloc(sizeof(char) * (len + 1));
	if (sub == NULL)
		return (0);
	i = 0;
	while (str[start] != '\0' && i < len)
		sub[i++] = str[start++];
	sub[i] = 0;
	return (sub);
}
