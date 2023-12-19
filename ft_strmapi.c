/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 11:24:18 by gdetourn          #+#    #+#             */
/*   Updated: 2023/12/19 09:35:59 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Function name 	ft_strmapi
	Prototype 	char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
	Turn in files	-
	Parameters 		s: The string on which to iterate.
					f: The function to apply to each character.
	Return value 	The string created from the successive applications of ’f’.
					NULL if the allocation fails.
	External functs. malloc
	Description 	Applies the function ’f’ to each character of the string 
	’s’, and passing its index as first argument to create a new string 
	(with malloc(3)) resulting from successive applications of ’f’.*/

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	char	*strmapi;
	int		i;

	i = 0;
	str = (char *)s;
	strmapi = malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (strmapi == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		strmapi[i] = (*f)(i, str[i]);
		i++;
	}
	strmapi[i] = '\0';
	return (strmapi);
}
