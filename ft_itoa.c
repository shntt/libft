/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shitakah <shitakah@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 23:14:19 by shitakah          #+#    #+#             */
/*   Updated: 2025/10/21 23:57:58 by shitakah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlen(int num)
{
	int			len;
	long long	res;

	len = 0;
	res = (long long)num;
	if (res < 0)
		res *= -1;
	while (res > 0)
	{
		res /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int num)
{
	char		*res;
	int			len;
	long long	st_num;

	len = ft_numlen(num);
	st_num = (long long)num;
	if (num <= 0)
		len++;
	if (num < 0)
		st_num *= -1;
	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	res[len] = 0;
	if (num == 0)
		res[0] = '0';
	if (num < 0)
		res[0] = '-';
	while (st_num)
	{
		res[--len] = st_num % 10 + '0';
		st_num /= 10;
	}
	return (res);
}
