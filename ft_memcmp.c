/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 11:49:07 by gdetourn          #+#    #+#             */
/*   Updated: 2023/12/19 09:33:31 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The  memcmp()  function  compares  the first n bytes (each interpreted as 
unsigned char) of the memory areas s1 and s2.

RETURN VALUE
       The memcmp() function returns an integer less than, equal to, or greater
	   than zero if the first n bytes of s1 is found, respectively, to be less
	   than, to match, or be greater than the first n bytes of s2.*/

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int				i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	if ((int)n == 0)
		return (0);
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (i < (int)n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
