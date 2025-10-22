/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shitakah <shitakah@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 00:00:50 by shitakah          #+#    #+#             */
/*   Updated: 2025/10/22 20:04:14 by shitakah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	s_len;
	size_t	i;

	i = 0;
	s_len = ft_strlen(s);
	if (s_len < len + start)
		len = s_len - start;
	dest = malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	ft_memcpy(dest, &s[start], len);
	dest[len] = 0;
	return (dest);
}
