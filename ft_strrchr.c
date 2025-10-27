/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shitakah <shitakah@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 01:15:08 by shitakah          #+#    #+#             */
/*   Updated: 2025/10/27 22:07:33 by shitakah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	*p;
	char	*var_s;

	p = 0;
	var_s = (char *)s;
	while (*var_s)
	{
		if (*var_s == c)
			p = var_s;
		var_s++;
	}
	if (*var_s == c)
		return (var_s);
	return (p);
}
