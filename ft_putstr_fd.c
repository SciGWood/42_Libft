/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 09:25:12 by gdetourn          #+#    #+#             */
/*   Updated: 2023/10/10 10:59:18 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Function name 	ft_putstr_fd
	Prototype 		void ft_putstr_fd(char *s, int fd);
	Turn in files 	-
	Parameters 		s: The string to output.
					fd: The file descriptor on which to write.
	Return value 	None
	External functs. write
	Description 	Outputs the string ’s’ to the given file descriptor.*/

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write (fd, &s[i], 1);
		i++;
	}
}
/*#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int	main(void)
{
	char	big[] = "coucouPLOUFbonjour";
	char	str4[] = "";
	int		fd;

	printf("\nfd = 1, str: %s\n", big);
	ft_putstr_fd(big, 1);
	printf("\nfd = 1, str: %s\n", str4);
	ft_putstr_fd(str4, 1);
	printf("\nfd = test_fd.txt, str: %s\n", big);
	fd = open("test_fd.txt", O_RDWR | O_APPEND);
	if (fd == -1)
	{
		printf("open() failed\n");
		return (1);
	}
	ft_putstr_fd("ft_putstr_fd:\n", fd);
	ft_putstr_fd(big, fd);
	ft_putstr_fd("\n", fd);
	if (close(fd) == -1)
	{
		printf("close() failed\n");
		return (1);
	}
	return (0);
}*/
