/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 17:05:12 by gdetourn          #+#    #+#             */
/*   Updated: 2023/10/11 13:26:53 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The  memcpy()  function  copies  n bytes from memory area src to memory
       area dest.  The memory areas must not overlap.  Use memmove(3)  if  the
       memory areas do overlap.

RETURN VALUE
       The memcpy() function returns a pointer to dest.*/

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	*d;

	i = 0;
	if (src == NULL && dest == NULL)
		return (NULL);
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}
/*#include <stdio.h>

int	main(void)
{
	char	src_cpy[6] = "abcde";
	char	dest_cpy[6] = "12345";
	char	test_cpy[6] = "12345";
	
	printf("\nmemcpy\n");
	printf("before --> src: %s, dest: %s, n = 4\n", src_cpy, dest_cpy);
	memcpy(dest_cpy, src_cpy, 4);
	printf("after --> src: %s, dest: %s\n", src_cpy, dest_cpy);
	printf("\nft_memcpy\n");
	printf("before --> src: %s, dest: %s, n = 4\n", test_cpy, dest_cpy);
	ft_memcpy(dest_cpy, test_cpy, 4);
	printf("after --> src: %s, dest: %s\n", test_cpy, dest_cpy);
	return (0);
}*/
