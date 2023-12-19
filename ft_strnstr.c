/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 12:46:29 by gdetourn          #+#    #+#             */
/*   Updated: 2023/10/11 14:35:08 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The strnstr() function locates the first occurrence of the null-termi‐
     nated string little in the string big, where not more than len characters
     are searched.  Characters that appear after a ‘\0’ character are not
     searched.  Since the strnstr() function is a FreeBSD specific API, it
     should only be used when portability is not a concern.

RETURN VALUES
     If little is an empty string, big is returned; if little occurs nowhere
     in big, NULL is returned; otherwise a pointer to the first character of
     the first occurrence of little is returned.*/

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*b;
	char	*l;

	i = 0;
	b = (char *)big;
	l = (char *)little;
	if (ft_strlen(l) == 0)
		return (b);
	while (i < len && b[i] != '\0')
	{
		if (b[i] == l[0])
		{
			j = 0;
			while (b[i + j] == l[j] && l[j] != '\0'
				&& b[i] != '\0' && (i + j) < len)
				j++;
			if (l[j] == '\0')
				return (&b[i]);
		}
		i++;
	}
	return (NULL);
}
/*#include <stdio.h>

int     main(void)
{
        char    big[] = "coucouPLOUFbonjour";
        char    little[] = "PLOUF";

        printf("%s\n", big);
		printf("len = 6, %s\n", ft_strnstr(big, little, 6));
		printf("len = 8, %s\n", ft_strnstr(big, little, 8));
		printf("len = 12, %s\n", ft_strnstr(big, little, 12));
        return (0);
}*/
