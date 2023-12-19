/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 11:28:06 by gdetourn          #+#    #+#             */
/*   Updated: 2023/10/12 11:57:56 by gdetourn         ###   ########.fr       */
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
/*#include <stdio.h>

int	main(void)
{
	const char	big[] = "coucouPLOUFbonjour";
	char		str4[] = "";
	char		*sub1;
	char		*sub2;
	char		*sub3;
	char		*sub4;

	sub1 = ft_substr(big, 6, 5);
	printf("str: %s\nstart: 6, len: 5\nsub: %s\n", big, sub1);
	free(sub1);
	sub2 = ft_substr(big, 3, 8);
	printf("\nstr: %s\nstart: 3, len: 8\nsub: %s\n", big, sub2);
	free(sub2);
	sub3 = ft_substr(str4, 6, 5);
	printf("\nstr: %s\nstart: 6, len: 5\nsub: %s\n", str4, sub3);
	free(sub3);
	sub4 = ft_substr(big, 35, 5);
	printf("str: %s\nstart: 6, len: 5\nsub: %s\n", big, sub4);
	free(sub4);
	return (0);
}
while (str[i] != '\0' && start < ft_strlen(str))
	{
		if (i == start)
		{
			while (str[start] != '\0' && start < i + len)
				sub[j++] = str[start++];
			sub[j] = '\0';
			return (sub);
		}
		i++;
	}
	return (NULL);*/