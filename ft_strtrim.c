/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shitakah <shitakah@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 20:05:00 by shitakah          #+#    #+#             */
/*   Updated: 2025/10/24 02:49:51 by shitakah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static bool	has_set(char c, char *set)
{
	while (*set)
	{
		if (c == *set)
			return (true);
		set++;
	}
	return (false);
}

char	*ft_strtrim(char *s1, char *set)
{
	size_t	start;
	size_t	end;
	size_t	len;
	char	*dest;

	if (!s1 || !set)
		return (NULL);
	len = ft_strlen(s1);
	start = 0;
	while (s1[start] && has_set(s1[start], set))
		start++;
	end = len;
	while (end > start && has_set(s1[end - 1], set))
		end--;
	len = end - start;
	dest = malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	ft_memcpy(dest, s1 + start, len);
	dest[len] = '\0';
	return (dest);
}
