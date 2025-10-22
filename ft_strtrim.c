/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shitakah <shitakah@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 20:05:00 by shitakah          #+#    #+#             */
/*   Updated: 2025/10/22 20:28:59 by shitakah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static bool	has_set(char *s1, char *set)
{
	while (*set)
	{
		if (*s1 == *set)
			return (true);
		set++;
	}
	return (false);
}

char	*ft_strtrim(char *s1, char *set)
{
	size_t	i;
	size_t	len;
	char	*dest;

	while (has_set(s1, set))
		s1++;
	len = ft_strlen(s1);
	i = 1;
	while (has_set(&s1[len - i++], set))
		s1[len - i] = 0;
	dest = malloc(sizeof(char) * len + 1);
	if (!dest)
		return (NULL);
	ft_memcpy(dest, s1, len + 1);
	return (dest);
}
