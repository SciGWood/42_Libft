/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 11:47:25 by gdetourn          #+#    #+#             */
/*   Updated: 2023/10/12 11:10:10 by gdetourn         ###   ########.fr       */
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
/*#include <stdio.h>

int	main(void)
{
	char	s1[] = "---  ===- = Hello --= =- World ---=== -=- ";
	char	s2[] = "---  ===- = ---=== -=- ";
	char	str4[] = "";
	char	set1[] = " -=";
	char	set2[] = "";
	char	*trim;
	char	*trim2;
	char	*trim3;
	char	*trim4;
	char	*trim5;

	trim = ft_strtrim(s1, set1);
	printf("s1: %s  \nset: %s\nstrtrim: \"%s\"\n", s1, set1, trim);
	free(trim);
	trim2 = ft_strtrim(s1, set2);
	printf("\ns1: %s  \nset: %s\nstrtrim: \"%s\"\n", s1, set2, trim2);
	free(trim2);
	trim3 = ft_strtrim(s2, set1);
	printf("\ns1: %s  \nset: %s\nstrtrim: \"%s\"\n", s2, set1, trim3);
	free(trim3);
	trim4 = ft_strtrim(str4, set1);
	printf("\ns1: %s  \nset: %s\nstrtrim: \"%s\"\n", str4, set1, trim4);
	free(trim4);
	trim5 = ft_strtrim(str4, set2);
	printf("\ns1: %s  \nset: %s\nstrtrim: \"%s\"\n", str4, set2, trim5);
	free(trim5);
	return (0);
}*/
