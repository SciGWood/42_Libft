/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:13:05 by gdetourn          #+#    #+#             */
/*   Updated: 2023/10/10 10:57:33 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Function name ft_putchar_fd
Prototype void ft_putchar_fd(char c, int fd);
Turn in files -
Parameters c: The character to output.
fd: The file descriptor on which to write.
Return value None
External functs. write
Description Outputs the character ’c’ to the given file
descriptor.*/

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int	main(void)
{
	int	fd;

	ft_putchar_fd('A', 1);
	printf(" == A(c), fd = 1\n");
	printf("c: A, fd = test_fd.txt\n");
	fd = open("test_fd.txt", O_RDWR | O_CREAT, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		printf("open() failed\n");
		return (1);
	}
	ft_putendl_fd("ft_putchar_fd:", fd);
	ft_putchar_fd('A', fd);
	ft_putchar_fd('\n', fd);
	if (close(fd) == -1)
	{
		printf("close() failed\n");
		return (1);
	}
	return (0);
}*/
