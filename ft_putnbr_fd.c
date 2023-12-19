/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:58:54 by gdetourn          #+#    #+#             */
/*   Updated: 2023/10/10 10:56:45 by gdetourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Function name 	ft_putnbr_fd
	Prototype 		void ft_putnbr_fd(int n, int fd);
	Turn in files 	-
	Parameters		n: The integer to output.
					fd: The file descriptor on which to write.
	Return value 	None
	External functs. write
	Description 	Outputs the integer ’n’ to the given file
					descriptor.*/

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	if (-2147483648 < n && n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n > 9)
	{
		ft_putnbr_fd((n / 10), fd);
		ft_putnbr_fd((n % 10), fd);
	}
	if (0 <= n && n <= 9)
		ft_putchar_fd((n + '0'), fd);
}
/*#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int	main(void)
{
	int	n1 = -2147483648;
	int	n2 = 156;
	int	fd;
	
	ft_putnbr_fd(n1, 1);
	printf(" == %d(n), fd = 1\n", n1);
	ft_putnbr_fd(n2, 1);
	printf(" == %d(n), fd = 1\n", n2);
	printf("\nfd = test_fd.txt, n: %d\n", n1);
	fd = open("test_fd.txt", O_RDWR | O_APPEND);
	if (fd == -1)
	{
		printf("open() failed\n");
		return (1);
	}
	ft_putendl_fd("ft_putnbr_fd:", fd);
	ft_putnbr_fd(n1, fd);
	ft_putchar_fd('\n', fd);
	if (close(fd) == -1)
	{
		printf("close() failed\n");
		return (1);
	}
	return (0);
}*/
