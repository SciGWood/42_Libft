/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 11:38:08 by gdetourn          #+#    #+#             */
/*   Updated: 2023/10/11 15:17:10 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The  strcmp()  function compares the two strings s1 and s2.  The locale
       is not taken into account (for  a  locale-aware  comparison,  see  str‐
       coll(3)).   It  returns an integer less than, equal to, or greater than
       zero if s1 is found, respectively, to be less than,  to  match,  or  be
       greater than s2.

       The  strncmp()  function  is similar, except it compares only the first
       (at most) n bytes of s1 and s2.

RETURN VALUE
       The strcmp() and strncmp() functions return an integer less than, equal
       to, or greater than zero if s1 (or the first n bytes thereof) is found,
       respectively, to be less than, to match, or be greater than s2.*/

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (i < (unsigned int)n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		if (str1[i] == '\0' && str2[i] == '\0')
			return (0);
		i++;
	}
	return (0);
}
/*#include <stdio.h>

int	main(void)
{
	char	s1[] = "Bonjour";
	char	s2[] = "BonDjour";
	char	str4[] = "";

	printf("s1: %s\ns2: %s\n", s1, s2);
	printf("%d == %d\n", strncmp(s1, s2, 3), ft_strncmp(s1, s2, 3));
	printf("%d == %d\n", strncmp(s1, s2, 6), ft_strncmp(s1, s2, 6));
	printf("%d == %d\n", strncmp(s1, str4, 1), ft_strncmp(s1, str4, 1));
	printf("%d == %d\n", strncmp(str4, s1, 2), ft_strncmp(str4, s1, 2));
	return (0);
}*/
