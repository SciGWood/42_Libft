/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 11:25:10 by gdetourn          #+#    #+#             */
/*   Updated: 2023/12/19 09:33:25 by gdetourn         ###   ########.fr       */
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
