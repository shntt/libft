/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shitakah <shitakah@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 20:39:10 by shitakah          #+#    #+#             */
/*   Updated: 2025/10/21 22:43:04 by shitakah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_strnstr(char *big, char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;

	if (!little)
		return (big);
	i = 0;
	while (i < len && big[i])
	{
		j = 0;
		k = i;
		while (little[j] && big[k] == little[j])
		{
			j++;
			k++;
		}
		if (!little[j] && i + j < len)
			return (&big[i]);
		i++;
	}
	return (NULL);
}
