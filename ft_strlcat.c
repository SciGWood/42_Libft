/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 13:14:51 by gdetourn          #+#    #+#             */
/*   Updated: 2023/10/11 10:00:23 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The strlcpy() and strlcat() functions copy and concatenate strings re‐
     spectively.
strlcpy() and strlcat() take the full size of the buffer (not just
     the length) and guarantee to NUL-terminate the result (as long as size is
     larger than 0 or, in the case of strlcat(), as long as there is at least
     one byte free in dst).  Note that a byte for the NUL should be included
     in size.  Also note that strlcpy() and strlcat() only operate on true “C”
     strings.  This means that for strlcpy() src must be NUL-terminated and
     for strlcat() both src and dst must be NUL-terminated.
The strlcat() function appends the NUL-terminated string src to the end
     of dst.  It will append at most size - strlen(dst) - 1 bytes, NUL-termi‐
     nating the result.

RETURN VALUES
     The strlcpy() and strlcat() functions return the total length of the
     string they tried to create.  For strlcpy() that means the length of src.
     For strlcat() that means the initial length of dst plus the length of
     src.  While this may seem somewhat confusing, it was done to make trunca‐
     tion detection simple.*/

#include "libft.h"

size_t	ft_strlcat(char *dst, char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	l;

	i = ft_strlen(dst);
	j = 0;
	l = i + ft_strlen(src);
	if (size <= i)
		return (size + ft_strlen(src));
	while (src[j] != '\0' && j < size - i - 1)
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	return (l);
}
/*#include <stdio.h>

int	main(void)
{
		char			dest[20] = "Aa";
		char			src[] = "Hello World";
		unsigned int	i;
		size_t			l;
		
		i = ft_strlen(dest);
		i++;
		printf("dest = %s, src = %s\n", dest, src);
		printf("return value == %zu\n", ft_strlcat(dest, src, i));
		l = ft_strlcat("pqrstuvwxyz", "abcd", 0);
		printf("%zu\n", l);
		return (0);
}*/
