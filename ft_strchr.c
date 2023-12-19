/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 10:59:03 by gdetourn          #+#    #+#             */
/*   Updated: 2023/10/11 16:51:09 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The  strchr() function returns a pointer to the first occurrence of the
       character c in the string s.

RETURN VALUE
       The strchr() and strrchr() functions return a pointer  to  the  matched
       character  or NULL if the character is not found.  The terminating null
       byte is considered part of the string, so that if  c  is  specified  as
       '\0', these functions return a pointer to the terminator.*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *)s;
	while (str[i] != '\0')
	{
		if (str[i] == (char)c)
			return (&str[i]);
		i++;
	}
	if ((char)c == '\0')
		return (&str[i]);
	return (NULL);
}
/*#include <stdio.h>

int	main(void)
{
	char	str[] = "Hello World";

	printf("str, chr, libC == 42libC\n");
	printf("%s, A, %s == %s\n", str, strchr(str, 'A'), ft_strchr(str, 'A'));
	printf("%s, \\0, %s == %s\n", str, strchr(str, '\0'), 
	ft_strchr(str, '\0'));
	printf("%s, o, %s == %s\n", str, strchr(str, 'o'), ft_strchr(str, 'o'));
	return (0);
}
if (str == NULL)
		return (NULL);*/