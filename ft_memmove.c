/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shitakah <shitakah@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 20:39:10 by shitakah          #+#    #+#             */
/*   Updated: 2025/10/21 21:25:33 by shitakah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, void *src, size_t n)
{
	size_t			i;
	unsigned char	*uc_d;
	unsigned char	*uc_s;

	i = 0;
	uc_d = (unsigned char *)dest;
	uc_s = (unsigned char *)src;
	if (dest < src)
	{
		while (i < n)
		{
			uc_d[i] = uc_s[i];
			i++;
		}
	}
	else
	{
		while (0 < n--)
		{
			uc_d[n] = uc_s[n];
		}
	}
	return (dest);
}
