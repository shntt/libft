/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shitakah <shitakah@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 00:14:27 by shitakah          #+#    #+#             */
/*   Updated: 2025/10/22 21:30:28 by shitakah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <stdbool.h>

int		ft_atoi(char *nptr);
void	*ft_bzero(void *s, size_t n);
void	*ft_memchr(void *s, int c, size_t n);
int		ft_memcmp(void *s1, void *s2, size_t n);
void	*ft_memcpy(void *dest, void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);
void	*ft_memmove(void *dest, void *src, size_t n);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_strncmp(char *s1, char *s2, size_t n);
size_t	ft_strlcpy(char *dst, char *src, size_t size);
size_t	ft_strlcat(char *dst, char *src, size_t size);
int		ft_strlen(char *str);
char	*ft_strchr(char *s, int c);
char	*ft_strrchr(char *s, int c);
void	*ft_strnstr(char *big, char *little, size_t len);
int		ft_tolower(int c);
int		ft_toupper(int c);
char	*ft_strdup(char *s);
void	*ft_calloc(size_t nmemb, size_t size);
char	*ft_itoa(int num);
char	*ft_substr(char *s, unsigned int start, size_t len);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strtrim(char *s1, char *set);
char	**ft_split(char *s, char c);

#endif
