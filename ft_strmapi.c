/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shitakah <shitakah@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 12:52:28 by shitakah          #+#    #+#             */
/*   Updated: 2025/10/24 02:25:26 by shitakah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	len;
	char	*dst;

	i = 0;
	len = ft_strlen(s);
	dst = malloc(sizeof(char) * (len + 1));
	while (i < len)
	{
		dst[i] = f(i, s[i]);
		i++;
	}
	dst[i] = 0;
	return (dst);
}
