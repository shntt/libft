/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shitakah <shitakah@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 20:29:28 by shitakah          #+#    #+#             */
/*   Updated: 2025/10/22 23:18:13 by shitakah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**alloc_arr(char ***arr, char *s, char c, bool in_word)
{
	size_t	num_of_words;

	num_of_words = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = true;
			num_of_words++;
		}
		if (*s == c && in_word)
			in_word = false;
		s++;
	}
	*arr = malloc(sizeof(char *) * (num_of_words + 1));
	return (*arr);
}

static void	free_words(char ***arr, size_t j)
{
	size_t	i;

	i = 0;
	while (i < j)
		free((*arr)[i++]);
}

static char	*dup_word(char ***arr, char *s, size_t n, size_t j)
{
	(*arr)[j] = malloc(sizeof(char) * (n + 1));
	if (!((*arr)[j]))
		return (free_words(arr, j), NULL);
	ft_memcpy((*arr)[j], s, n);
	(*arr)[j][n] = 0;
	return ((*arr)[j]);
}

static char	**set_words(char ***arr, char *s, char c, bool in_word)
{
	size_t	i;
	size_t	j;
	size_t	start;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c && !in_word)
		{
			in_word = true;
			start = i;
		}
		if ((s[i] == c && in_word) || (!s[i + 1] && in_word))
		{
			in_word = false;
			if (!s[i + 1])
				i++;
			if (!dup_word(arr, &(s[start]), i - start, j++))
				return (NULL);
		}
		i++;
	}
	return ((*arr)[j] = NULL, *arr);
}

char	**ft_split(char *s, char c)
{
	char	**arr;
	bool	in_word;

	in_word = false;
	arr = NULL;
	if (!alloc_arr(&arr, s, c, in_word))
		return (NULL);
	if (!set_words(&arr, s, c, in_word))
		return (NULL);
	return (arr);
}
