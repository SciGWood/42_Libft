/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 18:25:54 by gdetourn          #+#    #+#             */
/*   Updated: 2023/10/11 15:03:09 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The strlcpy() and strlcat() functions copy and concatenate strings re‐
     spectively.  They are designed to be safer, more consistent, and less er‐
     ror prone replacements for strncpy(3) and strncat(3).  Unlike those func‐
     tions, strlcpy() and strlcat() take the full size of the buffer (not just
     the length) and guarantee to NUL-terminate the result (as long as size is
     larger than 0 or, in the case of strlcat(), as long as there is at least
     one byte free in dst).  Note that a byte for the NUL should be included
     in size.  Also note that strlcpy() and strlcat() only operate on true “C”
     strings.  This means that for strlcpy() src must be NUL-terminated and
     for strlcat() both src and dst must be NUL-terminated.

     The strlcpy() function copies up to size - 1 characters from the NUL-ter‐
     minated string src to dst, NUL-terminating the result.
	 
RETURN VALUES
	The strlcpy() and strlcat() functions return the total length of the
    string they tried to create.  For strlcpy() that means the length of src.
*/

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	char	*s;

	i = 0;
	s = (char *)src;
	if (size > 0)
	{
		while (s[i] != '\0' && i < size - 1)
		{
			dest[i] = s[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (ft_strlen(s));
}
/*#include <stdio.h>

int     main(void)
{
	char	src[] = "Source";
	char	dest[] = "Desti";

	printf("%s\n%s\n", src, dest);
	printf("%ld\n", ft_strlcpy(dest, src, 12));
	printf("%s\n%s\n", src, dest);
	return (0);
}*/
