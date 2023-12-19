/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 14:47:50 by gdetourn          #+#    #+#             */
/*   Updated: 2023/10/05 17:33:25 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
/*#include <stdio.h>

int	main(void)
{
	printf("tested == expected == libc == 42libc\n\n");
	printf("ft_strlen\n");
	printf("Bonjour == 7 == %ld == %ld\n", strlen("Bonjour"), 
	ft_strlen("Bonjour"));
	printf("" " == 0 == %ld == %ld\n", strlen(""), ft_strlen(""));
	printf("Hello World == 11 == %ld == %ld\n", strlen("Hello World"), 
	ft_strlen("Hello World"));
	return (0);
}*/
