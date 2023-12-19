/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 11:25:10 by gdetourn          #+#    #+#             */
/*   Updated: 2023/10/11 17:14:24 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The  memchr()  function  scans  the  initial n bytes of the memory area
       pointed to by s for the first instance of c.  Both c and the  bytes  of
       the memory area pointed to by s are interpreted as unsigned char.
RETURN VALUE
       The  memchr()  and memrchr() functions return a pointer to the matching
       byte or NULL if the character does not occur in the given memory area.*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;
	char			*str;

	i = 0;
	str = (char *)s;
	while (i < n)
	{
		if (str[i] == (char)c || (str[i] == (char)c && (char)c == ' '))
			return (&str[i]);
		i++;
	}
	return (NULL);
}
/*#include <stdio.h>

int	main(void)
{
	char	str6[] = "Coucou";
	char	str1[] = "Hello World";

	printf("str, chr, n --> libC == 42libC\n");
	printf("%s, A, 10 --> %p == %p\n", str6, memchr(str6, 'A', 10), 
	ft_memchr(str6, 'A', 10));
	printf("%s, \\0, 10 --> %p == %p\n", str6, memchr(str6, '\0', 10), 
	ft_memchr(str6, '\0', 10));
	printf("%s, o, 10 --> %p == %p\n", str6, memchr(str6, 'o', 10), 
	ft_memchr(str6, 'o', 10));
	printf("%s, A, 10 --> %p == %p\n", str1, memchr(str1, 'A', 10), 
	ft_memchr(str1, 'A', 10));
	printf("%s, \\0, 10 --> %p == %p\n", str1, memchr(str1, '\0', 10), 
	ft_memchr(str1, '\0', 10));
	printf("%s, o, 10 --> %p == %p\n", str1, memchr(str1, 'o', 10), 
	ft_memchr(str1, 'o', 10));
	return (0);
}*/
