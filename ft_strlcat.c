/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakkas <zbakkas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 17:57:11 by zbakkas           #+#    #+#             */
/*   Updated: 2023/12/15 23:57:42 by zbakkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int	s;
	int	d;
	int	t;

	s = 0;
	d = 0;
	t = 0;
	while (src[s])
		s++;
	while (dst[d])
		d++;
	t = s + d;
	if (dstsize <= d)
	{
		return (s + dstsize);
	}
	s = 0;
	while (((dstsize - 1) - d) > 0)
	{
		dst[d++] = src[s++];
	}
	dst[d] = '\0';
	return (t);
}
/*
int main()
{
	char d[14]="pqrstuvwxyz";//2
	char d2[14]="abcd";//2
	char s[50]="lorem ipsum dolor sit amet";//
	printf("%lu\n",ft_strlcat(d,s,20));
	printf("%s\n",d);
pqrs    abcdefghi 15
pqrs   abcdefghi 16
                 17
	printf("%lu\n",ft_strlcat(d2,s,8));
	printf("%s",d2);
}*/