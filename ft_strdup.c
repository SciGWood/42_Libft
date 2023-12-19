/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 16:37:37 by gdetourn          #+#    #+#             */
/*   Updated: 2023/10/13 14:03:59 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The  strdup()  function returns a pointer to a new string which is a
duplicate of the string s. Memory for the new string is obtained with
malloc(3), and can be freed with free(3).

RETURN VALUE
       On  success, the strdup() function returns a pointer to the duplicated
	   string.  It returns NULL if insufficient memory was available,
	   with errno set to indicate the cause of the error.*/

#include "libft.h"

char	*ft_strdup(char	*src)
{
	char	*newstr;
	int		str_len;
	int		i;

	i = 0;
	str_len = ft_strlen(src);
	newstr = malloc(sizeof(char) * (str_len + 1));
	if (newstr == NULL)
		return (NULL);
	while (i < str_len)
	{
		newstr[i] = src[i];
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}
/*#include <stdio.h>

int	main(void)
{
	char	str6[] = "Coucou";
	char	*dup1;
	char	*dup2;

	dup1 = strdup(str6);
	dup2 = ft_strdup(str6);
	printf("src --> libC == 42libC\n");
	printf("%s --> %s == %s\n", str6, dup1, dup2);
	free(dup1);
	free(dup2);
	return (0);
}*/