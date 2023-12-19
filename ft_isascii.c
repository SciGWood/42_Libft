/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 14:12:29 by gdetourn          #+#    #+#             */
/*   Updated: 2023/10/05 16:42:49 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (0 <= c && c <= 127)
		return (1);
	else
		return (0);
}
/*#include <stdio.h>

int	main(void)
{
	printf("tested == expected == libc == 42libc\n\n");
	printf("ft_isascii\n");
	printf("a == 1 == %d == %d\n", isascii('a'), ft_isascii('a'));
	printf("6 == 1 == %d == %d\n", isascii('6'), ft_isascii('6'));
	printf(": == 1 == %d == %d\n", isascii(':'), ft_isascii(':'));
	printf("128 == 0 == %d == %d\n", isascii(128), ft_isascii(128));
	return (0);
}*/
