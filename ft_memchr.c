/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakkas <zbakkas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 19:44:26 by zbakkas           #+#    #+#             */
/*   Updated: 2023/12/14 20:45:08 by zbakkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	const void	*re;
	int			x;

	x = 0;
	re = str;
	while (n > x)
	{
		if (*((unsigned char *)re + x) == (unsigned char)c)
		{
			return ((char *)re + x);
		}
		x++;
	}
	return (NULL);
}
/*
int main ()
{
	char *s="hhhh";
	if(ft_memchr(s,2+256,3) == s+2)
		printf("ffff");
}*/