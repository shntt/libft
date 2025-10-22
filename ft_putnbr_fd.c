/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shitakah <shitakah@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 23:42:33 by shitakah          #+#    #+#             */
/*   Updated: 2025/10/23 00:06:04 by shitakah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long long	res;

	res = 0;
	n = (long long)n;
	if (n < 0)
	{
		write(fd, "-", 1);
		n *= -1;
	}
	while (n > 0)
	{
		ft_putnbr_fd(n / 10, fd);
		n /= 10;
	}
	res = n % 10 + '0';
	write(fd, &res, 1);
}
