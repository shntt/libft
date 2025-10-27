/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shitakah <shitakah@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 01:15:08 by shitakah          #+#    #+#             */
/*   Updated: 2025/10/27 21:26:52 by shitakah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	char	*var_s;

	var_s = (char *)s;
	while (*var_s)
	{
		if (*var_s == c)
			return (var_s);
		var_s++;
	}
	if (*var_s == c)
		return (var_s);
	return (0);
}
