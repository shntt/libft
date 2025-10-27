/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shitakah <shitakah@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 20:39:10 by shitakah          #+#    #+#             */
/*   Updated: 2025/10/27 22:13:35 by shitakah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, void const *src, size_t n)
{
	size_t			i;
	unsigned char	*uc_d;
	unsigned char	*uc_s;

	if (!dest && !src)
		return (NULL);
	uc_d = (unsigned char *)dest;
	uc_s = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		uc_d[i] = uc_s[i];
		i++;
	}
	return (dest);
}
