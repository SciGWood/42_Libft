/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 12:25:55 by gdetourn          #+#    #+#             */
/*   Updated: 2023/10/05 16:42:45 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (('0' <= c && c <= '9') || ('A' <= c && c <= 'Z')
		|| ('a' <= c && c <= 'z'))
		return (1);
	else
		return (0);
}
/*#include <stdio.h>

int	main(void)
{
	printf("tested == expected == libc == 42libc\n\n");
	printf("ft_isalnum\n");
	printf("a == 1 == %d == %d\n", isalnum('a'), ft_isalnum('a'));
	printf("6 == 1 == %d == %d\n", isalnum('6'), ft_isalnum('6'));
	printf(": == 0 == %d == %d\n", isalnum(':'), ft_isalnum(':'));
	return (0);
}*/
