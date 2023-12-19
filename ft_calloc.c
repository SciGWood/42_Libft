/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 16:37:40 by gdetourn          #+#    #+#             */
/*   Updated: 2023/10/16 14:36:48 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The  malloc() function allocates size bytes and returns a pointer to the 
allocated memory.  The memory is not initialized.  If size is 0, then  malloc() 
returns  either  NULL,  or  a  unique pointer value that can later be 
successfully passed to free().

    The  free() function frees the memory space pointed to by ptr, which must 
have been returned by a previous call to malloc(), calloc(), or realloc(). 
Otherwise, or if  free(ptr)  has  already been called before, undefined 
behavior occurs.  If ptr is NULL, no operation is performed.

    The  calloc()  function  allocates memory for an array of nmemb elements 
of size bytes each and returns a pointer to the allocated memory.  The memory 
is set to zero.  If nmemb or size is  0, then  calloc()  returns  either  NULL, 
or a unique pointer value that can later be successfully passed to free().  If 
the multiplication of nmemb and size would result  in  integer  overflow, then 
calloc() returns an error.  By contrast, an integer overflow would not be 
detected in the following call to malloc(), with the result that an incorrectly 
sized block of memory would  be allocated:
           malloc(nmemb * size);

RETURN VALUE
       The malloc() and calloc() functions return a pointer to the allocated 
	memory, which is suitably aligned for any built-in type.  On error, these 
	functions return NULL.  NULL may  also  be  returned  by  a  successful 
	call to malloc() with a size of zero, or by a successful call to calloc() 
	with nmemb or size equal to zero.

    	The free() function returns no value.

void *malloc(size_t size);
void free(void *ptr);
void *calloc(size_t nmemb, size_t size);*/

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	useless;

	if (!nmemb || !size)
		return (malloc(0));
	useless = nmemb * size;
	if (useless > 2147483647)
		return (0);
	ptr = malloc(useless);
	if (ptr)
		ft_bzero(ptr, useless);
	return (ptr);
}
/*#include <stdio.h>

int	main(void)
{
	char	str6[] = "Coucou";
	char	str4[] = "";
	//int		tab[5] = {1,2,3,4,5};
	char	*calloc1;
	char	*calloc2;
	char	*calloc3;
	char	*calloc4;

	calloc1 = calloc(ft_strlen(str6), 1);
	calloc2 = ft_calloc(ft_strlen(str6), 1);
	printf("str: , return ptr --> libC (strlen) == 42libC (strlen)\n");
	printf("%s --> %s (%zu) == %s (%zu)\n", str6, calloc1, ft_strlen(calloc1), 
	calloc2, ft_strlen(calloc2));
	free(calloc1);
	free(calloc2);
	calloc3 = calloc(ft_strlen(str4), 1);
	calloc4 = ft_calloc(ft_strlen(str4), 1);
	printf("str: , return ptr --> libC (strlen) == 42libC (strlen)\n");
	printf("%s --> %s (%zu) == %s (%zu)\n", str4, calloc3, ft_strlen(calloc3), 
	calloc4, ft_strlen(calloc4));
	free(calloc3);
	free(calloc4);
	return (0);
}*/
