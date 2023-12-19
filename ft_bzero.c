/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 16:51:47 by gdetourn          #+#    #+#             */
/*   Updated: 2023/10/10 14:20:45 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The  bzero()  function  erases  the  data  in the n bytes of the memory
       starting at the location pointed to by s, by writing zeros (bytes  con‐
       taining '\0') to that area.
RETURN VALUE
       None.*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}
/*#include <stdio.h>

int	main(void)
{
	char	str3[] = "Hello World";
	char	str4[] = "Hello World";
	
	printf("\nbzero\n");
	printf("str, n --> expected == str\n");
	printf("%s, 3 --> lo World == ", str3);
	bzero(str3, 3);
	printf("%s\n", str3 + 3);
	printf("\nft_bzero\n");
	printf("str, n --> expected == str\n");
	printf("%s, 3 --> lo World == ", str4);
	ft_bzero(str4, 3);
	printf("%s\n", str4 + 3);
	return (0);
}*/
