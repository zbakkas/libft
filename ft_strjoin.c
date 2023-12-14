/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakkas <zbakkas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 19:48:58 by zbakkas           #+#    #+#             */
/*   Updated: 2023/12/10 15:31:12 by zbakkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*re;
	int		xx;
	int		x;

	x = 0;
	xx = 0;
	re = ft_calloc(ft_strlen(s1) + ft_strlen(s2) + 1, sizeof(char));
	while (s1[x])
	{
		re[xx] = s1[x];
		x++;
		xx++;
	}
	x = 0;
	while (s2[x])
	{
		re[xx] = s2[x];
		xx++;
		x++;
	}
	return (re);
}
/*
int main()
{
	printf("%s",ft_strjoin("bbbb","aa"));
}*/