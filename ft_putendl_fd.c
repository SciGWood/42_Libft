/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 09:25:40 by gdetourn          #+#    #+#             */
/*   Updated: 2023/12/19 09:34:19 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Function name 	ft_putendl_fd
	Prototype 		void ft_putendl_fd(char *s, int fd);
	Turn in files 	-
	Parameters 		s: The string to output.
					fd: The file descriptor on which to write.
	Return value 	None
	External functs. write
	Description 	Outputs the string ’s’ to the given file descriptor
					followed by a newline.*/

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write (fd, &s[i], 1);
		i++;
	}
	write (fd, "\n", 1);
}
