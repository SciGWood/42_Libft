/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 11:24:15 by gdetourn          #+#    #+#             */
/*   Updated: 2023/10/10 15:54:10 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Function name 	ft_striteri
	Prototype 		void ft_striteri(char *s, void (*f)(unsigned int, char*));
	Turn in files 	-
	Parameters 		s: The string on which to iterate.
					f: The function to apply to each character.
	Return value 	None
	External functs. None
	Description 	Applies the function ’f’ on each character of the string 
	passed as argument, passing its index as first argument. Each character is 
	passed by address to ’f’ to be modified if necessary.*/

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int		i;

	i = 0;
	while (s[i] != '\0')
	{
		(*f)(i, &s[i]);
		i++;
	}
}
/*#include <stdio.h>

static void	ft_toupper_bis(unsigned int c, char *d)
{
	(void)d;
	if ('a' <= c && c <= 'z')
		c -= 32;
}

int	main(void)
{
	char	striteri[] = "coucouPLOUFbonjour";

	printf("%s\n", striteri);
	ft_striteri(striteri, ft_toupper_bis);
	printf("%s\n", striteri);
	return (0);
}*/
