/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 11:48:09 by gdetourn          #+#    #+#             */
/*   Updated: 2023/10/05 16:42:56 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z'))
		return (1);
	else
		return (0);
}
/*#include <stdio.h>

int	main(void)
{
	printf("tested == expected == libc == 42libc\n\n");
	printf("ft_isalpha\n");
	printf("l == 1 == %d == %d\n", isalpha('l'), ft_isalpha('l'));
	printf("8 == 0 == %d == %d\n", isalpha('8'), ft_isalpha('8'));
	return (0);
}*/
