/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakkas <zbakkas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 19:07:07 by zbakkas           #+#    #+#             */
/*   Updated: 2023/12/23 16:39:11 by zbakkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	c_word(char const *s, char c)
{
	size_t	x;
	int		re;

	x = 0;
	re = 0;
	if (!s[x])
		return (0);
	if (s[x] && c == '\0')
		return (1);
	while (s[x] == c)
		x++;
	if (s[x] == '\0')
		return (0);
	while (s[x])
	{
		if (c == s[x] && c != s[x + 1] && x < ft_strlen(s) - 1)
			re++;
		x++;
	}
	return (re + 1);
}

static	char	**is_free(char **d)
{
	int	x;

	x = 0;
	while (d[x])
	{
		free(d[x]);
		x++;
	}
	free(d);
	return (NULL);
}

static	char	*word(char const *s, char c, int *x)
{
	int		i;
	char	*re;
	int		j;

	i = 0;
	while (s[*x] == c)
		(*x)++;
	while (s[(*x) + i] && s[(*x) + i] != c)
		i++;
	re = malloc (i + 1);
	if (!re)
		return (NULL);
	j = 0;
	while (i > j)
		re[j++] = s[(*x)++];
	re[j] = '\0';
	return (re);
}

char	**ft_split(char const *s, char c)
{
	char	**re;
	int		x;
	int		j;
	int		t;

	x = 0;
	j = 0;
	if (!s)
		return (NULL);
	t = c_word(s, c);
	re = (char **)malloc((1 + t) * sizeof(char *));
	if (!re)
		return (NULL);
	while (j < t)
	{
		re[j] = word(s, c, &x);
		if (!re[j])
			return (is_free(re));
		j++;
	}
	re[j] = NULL;
	return (re);
}
