/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 16:00:39 by gdetourn          #+#    #+#             */
/*   Updated: 2023/10/25 14:19:58 by gdetourn         ###   ########.fr       */
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

/*#include <stdio.h>

//Passer par un calloc ?
//Faire une fonction free si 2nd mot ou + echoue, free tout avant.

int     main(void)
{
    char    **tab1;
	char	**tab2;
	char	**tab3;
	char	**tab4;
	char	split1[] = "====Hello==World====";
	char	split2[] = "Bonjour=tout=le=monde";
	char	split3[] = "====";
	char	str4[] = "";
	int		i;

        tab1 = ft_split(split1, '=');
		printf("%s\n", split1);
        i = 0;
        while (tab1[i])
        {
                printf("%s\n", tab1[i]);
				free(tab1[i]);
                i++;
        }
        tab2 = ft_split(split2, '=');
		printf("%s\n", split2);
        i = 0;
        while (tab2[i])
        {
                printf("%s\n", tab2[i]);
				free(tab2[i]);
                i++;
        }
        tab3 = ft_split(split3, '=');
		printf("%s\n", split3);
        i = 0;
        while (tab3[i])
        {
                printf("%s\n", tab3[i]);
				free(tab3[i]);
                i++;
        }
        tab4 = ft_split(str4, '=');
		printf("%s\n", str4);
        i = 0;
        while (tab4[i])
		{
			printf("%s\n", tab4[i]);
			free(tab4[i]);
			i++;
		}
		free(tab1);
		free(tab2);
		free(tab3);
		free(tab4);
        return (0);
}*/
