/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 11:47:25 by gdetourn          #+#    #+#             */
/*   Updated: 2023/12/19 09:36:29 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Function name 	ft_strtrim
	Prototype 		char *ft_strtrim(char const *s1, char const *set);
	Turn in files 	-
	Parameters 		s1: The string to be trimmed.
					set: The reference set of characters to trim.
	Return value 	The trimmed string.
					NULL if the allocation fails.
	External functs. malloc
	Description 	Allocates (with malloc(3)) and returns a copy of ’s1’ with 
					the characters specified in ’set’ removed from the 
					beginning and the end of the string.*/

#include "libft.h"

static int	isset(const char *set, int c)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*strtrim;
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = 0;
	k = 0;
	j = ft_strlen(s1) - 1;
	while (isset(set, s1[i]))
		i++;
	if (i == ft_strlen(s1))
		return (ft_strdup(""));
	while (isset(set, s1[j]))
		j--;
	strtrim = malloc(sizeof(char) * (j - i + 2));
	if (strtrim == NULL)
		return (NULL);
	while (i <= j)
	{
		strtrim[k] = s1[i];
		i++;
		k++;
	}
	strtrim[k] = '\0';
	return (strtrim);
}
