/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:58:54 by gdetourn          #+#    #+#             */
/*   Updated: 2023/12/19 09:34:26 by gdetourn         ###   ########.fr       */
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
