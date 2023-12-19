/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:56:18 by gdetourn          #+#    #+#             */
/*   Updated: 2023/12/19 09:32:29 by gdetourn         ###   ########.fr       */
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
