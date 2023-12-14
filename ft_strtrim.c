/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakkas <zbakkas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 15:47:33 by zbakkas           #+#    #+#             */
/*   Updated: 2023/12/11 14:57:38 by zbakkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	chick(char s, char const *set)
{
	int	x;

	x = 0;
	while (set[x])
	{
		if (s == set[x])
			return (1);
		x++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*re;
	int		star;
	int		end;

	star = 0;
	end = ft_strlen(s1);
	while (s1[star] && chick(s1[star], set))
		star++;
	while (s1[end - 1] && chick(s1[end - 1], set))
		end--;
	if (end > star)
		re = ft_substr(s1, star, end - star);
	else
		re = ft_substr(s1, star, star - end);
	return (re);
}
/*
int main()
{
	char s1[]="k       gyt0lg";
	char set[]="g oklk";
	
	printf("==%s",ft_strtrim(s1,set));

}*/