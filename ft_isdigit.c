/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 12:18:28 by gdetourn          #+#    #+#             */
/*   Updated: 2023/10/05 16:41:55 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if ('0' <= c && c <= '9')
		return (1);
	else
		return (0);
}
/*#include <stdio.h>

int	main(void)
{
	printf("tested == expected == libc == 42libc\n\n");
	printf("ft_isdigit\n");
	printf("a == 0 == %d == %d\n", isdigit('a'), ft_isdigit('a'));
	printf("8 == 1 == %d == %d\n", isdigit('8'), ft_isdigit('8'));
	return (0);
}*/
