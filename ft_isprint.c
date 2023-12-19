/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 14:41:53 by gdetourn          #+#    #+#             */
/*   Updated: 2023/10/10 14:43:34 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (32 <= c && c < 127)
		return (1);
	else
		return (0);
}
/*#include <stdio.h>

int	main(void)
{
	printf("tested == expected == libc == 42libc\n\n");
	printf("ft_isprint\n");
	printf("a == 1 == %d == %d\n", isprint('a'), ft_isprint('a'));
	printf("6 == 1 == %d == %d\n", isprint('6'), ft_isprint('6'));
	printf(": == 1 == %d == %d\n", isprint(':'), ft_isprint(':'));
	printf("128 == 0 == %d == %d\n", isprint(128), ft_isprint(128));
	printf("\t == 0 == %d == %d\n", isprint('\t'), ft_isprint('\t'));
	return (0);
}*/
