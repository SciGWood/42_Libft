/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 14:51:08 by gdetourn          #+#    #+#             */
/*   Updated: 2023/10/10 14:05:33 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The  memset()  function  fills  the  first  n  bytes of the memory area
       pointed to by s with the constant byte c.

RETURN VALUE
       The memset() function returns a pointer to the memory area s.*/

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < (unsigned int) n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (ptr);
}
/*#include <stdio.h>

int	main(void)
{
	char	str1[8] = "Bonjour";
	char	str2[8] = "Bonjour";
	
	printf("\nmemset\n");
	printf("str, chr, n --> expected == str\n");
	printf("%s, G, 3 --> GGGjour == ", str1);
	memset(str1, 'G', 3);
	printf("%s\n", str1);
	printf("\nft_memset\n");
	printf("str, chr, n --> expected == str\n");
	printf("%s, G, 3 --> GGGjour == ", str2);
	ft_memset(str2, 'G', 3);
	printf("%s\n", str2);
	return (0);
}*/
