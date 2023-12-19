/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:56:18 by gdetourn          #+#    #+#             */
/*   Updated: 2023/10/11 17:47:49 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Function name 	ft_itoa
	Prototype 		char *ft_itoa(int n);
	Turn in files 	-
	Parameters 		n: the integer to convert.
	Return value 	The string representing the integer.
					NULL if the allocation fails.
	External functs. malloc
	Description 	Allocates (with malloc(3)) and returns a string
					representing the integer received as an argument. 
					Negative numbers must be handled.*/

#include "libft.h"

static int	ft_nb_digit(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char			*str;
	int				count;
	unsigned int	i;

	count = 0;
	count = ft_nb_digit(n);
	str = malloc(sizeof(char) * (count + 1));
	if (str == NULL)
		return (NULL);
	str[count] = '\0';
	i = 0;
	i = n;
	if (n < 0)
		i = -n;
	while (0 < count)
	{
		count--;
		str[count] = (i % 10) + '0';
		i /= 10;
	}
	if (n == 0)
		str[0] = '0';
	if (n < 0)
		str[0] = '-';
	return (str);
}
/*#include <stdio.h>

int	main(void)
{
	int		n1 = -2147483648;
	int		n2 = 0;
	int		n3 = -42;
	char	*itoa1;
	char	*itoa2;
	char	*itoa3;
	
	itoa1 = ft_itoa(n1);
	printf("n: %d == %s\n", n1, itoa1);
	itoa2 = ft_itoa(n2);
	printf("n: %d == %s\n", n2, itoa2);
	itoa3 = ft_itoa(n3);
	printf("n: %d == %s\n", n3, itoa3);
	free(itoa1);
	free(itoa2);
	free(itoa3);
	return (0);
}*/
