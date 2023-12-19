/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 17:59:40 by gdetourn          #+#    #+#             */
/*   Updated: 2023/10/11 13:27:01 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The  memmove()  function  copies n bytes from memory area src to memory
       area dest.  The memory areas may overlap: copying takes place as though
       the  bytes in src are first copied into a temporary array that does not
       overlap src or dest, and the bytes are then copied from  the  temporary
       array to dest.

RETURN VALUE
       The memmove() function returns a pointer to dest.*/

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;

	if (src == NULL && dest == NULL)
		return (NULL);
	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	if (d < s)
	{
		while (n--)
			*d++ = *s++;
	}
	else
	{
		d = d + n - 1;
		s = s + n - 1;
		while (n--)
			*d-- = *s--;
	}
	return (dest);
}
/*#include <stdio.h>

int	main(void)
{
	char	src_move[6] = "abcde";
	char	src2_move[6] = "12345";
	
	printf("\nmemmove\n");
	printf("src before: %s\n", src_move);
	printf("return value:  address, src after: expected == str\n");
	printf("return value: %p, src after: ababc == %s\n", 
	memmove(src_move + 2, src_move, 3), src_move);
	printf("\nft_memmove\n");
	printf("src before: %s\n", src2_move);
	printf("return value:  address, src after: expected == str\n");
	printf("return value: %p, src after: 12123 == %s\n", 
	ft_memmove(src2_move + 2, src2_move, 3), src2_move);
	return (0);
}*/
