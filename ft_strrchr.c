/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 11:09:02 by gdetourn          #+#    #+#             */
/*   Updated: 2023/10/11 16:51:47 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The strrchr() function returns a pointer to the last occurrence of  the
       character c in the string s.

RETURN VALUE
       The strchr() and strrchr() functions return a pointer  to  the  matched
       character  or NULL if the character is not found.  The terminating null
       byte is considered part of the string, so that if  c  is  specified  as
       '\0', these functions return a pointer to the terminator.*/

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *)s;
	i = ft_strlen(str);
	if ((char)c == '\0')
		return (&str[i]);
	i--;
	while (0 <= i)
	{
		if (str[i] == (char)c)
			return (&str[i]);
		i--;
	}
	return (NULL);
}
/*#include <stdio.h>

int	main(void)
{
	char	str[] = "Hello World";

	printf("str, chr, libC == 42libC\n");
	printf("%s, A, %s == %s\n", str, strrchr(str, 'A'), ft_strrchr(str, 'A'));
	printf("%s, \\0, %s == %s\n", str, strrchr(str, '\0'), 
	ft_strrchr(str, '\0'));
	printf("%s, o, %s == %s\n", str, strrchr(str, 'o'), ft_strrchr(str, 'o'));
	return (0);
}
if (str == NULL)
		return (NULL);*/
