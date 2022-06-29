/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleroux <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 11:39:41 by jleroux           #+#    #+#             */
/*   Updated: 2021/10/25 11:39:43 by jleroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putnbrrec(unsigned int n, int fd)
{
	if (n > 9)
		ft_putnbrrec(n / 10, fd);
	ft_putchar('0' + (n % 10), fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	u_nb;

	if (n < 0)
	{
		ft_putchar('-', fd);
		u_nb = -n;
	}
	else
	{
		u_nb = n;
	}
	ft_putnbrrec(u_nb, fd);
}
