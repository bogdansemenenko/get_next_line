/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsemenen <bsemenen@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 19:46:00 by bsemenen          #+#    #+#             */
/*   Updated: 2025/10/13 19:58:37 by bsemenen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static char	integer_to_character(int nb)
{
	char	numch;

	numch = nb + '0';
	return (numch);
}

void	ft_putnbr_fd(int n, int fd)
{
	char	ch;
	int		inum;

	inum = n % 10;
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
		inum = n % 10;
	}
	if (n > 9)
	{
		inum = n % 10;
		n = n / 10;
		ft_putnbr_fd(n, fd);
	}
	ch = integer_to_character(inum);
	write(fd, &ch, 1);
	return ;
}
