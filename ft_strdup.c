/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 16:37:37 by gdetourn          #+#    #+#             */
/*   Updated: 2023/12/19 09:35:07 by gdetourn         ###   ########.fr       */
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
