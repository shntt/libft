/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shitakah <shitakah@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 20:39:10 by shitakah          #+#    #+#             */
/*   Updated: 2025/10/27 22:05:01 by shitakah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*var_big;
	size_t	i;
	size_t	j;
	size_t	k;

	if (len == 0 && *little)
		return (NULL);
	var_big = (char *)big;
	if (*little == '\0' || (var_big == little))
		return (var_big);
	i = 0;
	while (i < len && var_big[i])
	{
		j = 0;
		k = i;
		while (little[j] && var_big[k] == little[j])
		{
			j++;
			k++;
		}
		if (!little[j] && i + j < len)
			return (&var_big[i]);
		i++;
	}
	return (NULL);
}
