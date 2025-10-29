/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shitakah <shitakah@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 20:29:28 by shitakah          #+#    #+#             */
/*   Updated: 2025/10/29 23:32:52 by shitakah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	free_words(char **arr, size_t j)
{
	while (j > 0)
	{
		free(arr[--j]);
	}
	free(arr);
}

static size_t	count_words(char const *s, char c)
{
	size_t	n;
	bool	in;

	n = 0;
	in = false;
	while (*s)
	{
		if (*s != c && !in)
		{
			in = true;
			n++;
		}
		else if (*s == c)
		{
			in = false;
		}
		s++;
	}
	return (n);
}

static char	*dup_range(char const *start, size_t len)
{
	char	*p;
	size_t	i;

	p = (char *)malloc(len + 1);
	if (!p)
		return (NULL);
	i = 0;
	while (i < len)
	{
		p[i] = start[i];
		i++;
	}
	p[len] = '\0';
	return (p);
}

static char	**alloc_words(char const *s, char c, char **arr, bool in)
{
	size_t	i;
	size_t	j;
	size_t	start;
	size_t	len;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c && !in)
		{
			in = true;
			start = i;
		}
		if (in && (s[i + 1] == c || s[i + 1] == '\0'))
		{
			len = i - start + 1;
			arr[j] = dup_range(s + start, len);
			if (!arr[j++])
				return (free_words(arr, --j), NULL);
			in = false;
		}
		i++;
	}
	return (arr[j] = NULL, arr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	words;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	arr = (char **)malloc(sizeof(char *) * (words + 1));
	if (!arr)
		return (NULL);
	if (!alloc_words(s, c, arr, false))
		return (NULL);
	return (arr);
}
