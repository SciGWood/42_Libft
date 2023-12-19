/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 16:00:39 by gdetourn          #+#    #+#             */
/*   Updated: 2023/12/19 09:34:47 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Function name 	ft_split
	Prototype 		char **ft_split(char const *s, char c);
	Turn in files 	-
	Parameters 		s: The string to be split.
					c: The delimiter character.
	Return value 	The array of new strings resulting from the split.
					NULL if the allocation fails.
	External functs. malloc, free
	Description 	Allocates (with malloc(3)) and returns an array of strings 
	obtained by splitting ’s’ using the character ’c’ as a delimiter. 
	The array must end with a NULL pointer.*/

#include "libft.h"

static int	isdel(int a, int c)
{
	if (a == c)
		return (1);
	return (0);
}

static int	ft_countwords(char *str, int c)
{
	int	i;
	int	nb_words;

	i = 0;
	nb_words = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && isdel(str[i], c))
			i++;
		if (str[i] != '\0')
			nb_words++;
		while (str[i] != '\0' && !isdel(str[i], c))
			i++;
	}
	return (nb_words);
}

static int	ft_countchar(char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && !isdel(str[i], c))
		i++;
	return (i);
}

static char	*ft_strndup(char *str, int n)
{
	char	*dup;
	int		i;

	i = 0;
	dup = malloc(sizeof(char) * (n + 1));
	if (dup == NULL)
		return (dup);
	while (str[i] != '\0' && i < n)
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	str = (char *)s;
	tab = malloc(sizeof(char *) * (ft_countwords(&str[i], c) + 1));
	if (tab == NULL)
		return (0);
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && isdel(str[i], c))
			i++;
		if (str[i] != '\0')
		{
			tab[j] = ft_strndup(&str[i], ft_countchar(&str[i], c));
			j++;
		}
		while (str[i] != '\0' && !isdel(str[i], c))
			i++;
	}
	tab[j] = 0;
	return (tab);
}
