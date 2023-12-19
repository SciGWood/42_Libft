/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 18:15:58 by gdetourn          #+#    #+#             */
/*   Updated: 2023/10/05 16:45:27 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if ('A' <= c && c <= 'Z')
		c += 32;
	return (c);
}
/*#include <stdio.h>

int	main(void)
{
	printf("tested == expected == libc == 42libc\n\n");
	printf("ft_tolower\n");
	printf("a == (a)97 == %d == %d\n", tolower('a'), ft_tolower('a'));
	printf("B == (b)98 == %d == %d\n", tolower('B'), ft_tolower('B'));
	printf("0 == (0)48 == %d == %d\n", tolower('0'), ft_tolower('0'));
	printf("- == (-)45 == %d == %d\n", tolower('-'), ft_tolower('-'));
	return (0);
}*/
