/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 18:16:01 by gdetourn          #+#    #+#             */
/*   Updated: 2023/10/05 16:41:02 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if ('a' <= c && c <= 'z')
		c -= 32;
	return (c);
}
/*#include <stdio.h>

int	main(void)
{
	printf("tested == expected == libc == 42libc\n\n");
	printf("ft_toupper\n");
	printf("a == (A)65 == %d == %d\n", toupper('a'), ft_toupper('a'));
	printf("B == (B)66 == %d == %d\n", toupper('B'), ft_toupper('B'));
	printf("0 == (0)48 == %d == %d\n", toupper('0'), ft_toupper('0'));
	printf("- == (-)45 == %d == %d\n", toupper('-'), ft_toupper('-'));
	return (0);
}*/
