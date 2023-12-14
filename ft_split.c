/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakkas <zbakkas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 19:07:07 by zbakkas           #+#    #+#             */
/*   Updated: 2023/12/14 19:09:43 by zbakkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	c_word(char const *s, char c)
{
	int	x;
	int	re;

	x = 0;
	re = 0;
	if (!s[x] || c == '\0')
		return (0);
	while (s[x] == c)
		x++;
	while (s[x])
	{
		if (c == s[x] && c != s[x + 1] && x < ft_strlen(s) - 1)
			re++;
		x++;
	}
	return (re + 1);
}

int	*l_word(char const *s, char c, int x)
{
	int	re[2];
	int	j;
	int	xx;

	j = 0;
	xx = x;
	while (s[xx] != c)
	{
		xx++;
		j++;
	}
	re[0] = j;
	j = 0;
	xx = 0;
	while (s[xx])
	{
		if (s[xx] != c)
			j++;
		xx++;
	}
	re[1] = j;
	return (re);
}

int	n_word(char const *s, char c, int x)
{
	if (s[x] != c && x == 0)
		return (0);
	while (s[x] && s[x] != c)
		x++;
	while (s[x] == c)
		x++;
	return (x);
}

void	is_free(char const *s, char c, char **d)
{
	int	x;

	x = 0;
	while (d[x])
	{
		free(d[x]);
		x++;
	}
	free(d);
	d = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**re;
	int		x;
	int		j;

	x = 0;
	j = 0;
	re = (char **)ft_calloc(1 + c_word(s, c), sizeof(char *));
	if (!re)
		return (NULL);
	if ((c_word(s, c) == 1 && !l_word(s, c, x)[1]) || (!s || c == '\0'))
	{
		re[0] = NULL;
		return (re);
	}
	while (c_word(s, c) > j)
	{
		x = n_word(s, c, x);
		re[j++] = ft_substr(s, x, l_word(s, c, x)[0]);
		if (!re[j - 1])
			is_free(s, c, re);
		if (x == 0)
			x++;
	}
	re[j] = NULL;
	return (re);
}
/*
int main ()
{
	
    char const *s ="      split       this for   me  !       ";
	//char const *s ="  d s vv   ";
	char c =' ';
	int x = c_word(s,c); 
	int j=0;
	while (ft_split(s,c)[j])
	{
		printf("%s\n",ft_split(s,c)[j]);
		j++;
	}
	

	printf("%d\n",c_word(s,c));
	//printf("%s\n",ft_split(s,c)[0]);
}*/
