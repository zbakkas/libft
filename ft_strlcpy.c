/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakkas <zbakkas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 16:22:06 by zbakkas           #+#    #+#             */
/*   Updated: 2023/12/08 20:44:58 by zbakkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int	x;
	int	r;

	x = 0;
	r = 0;
	while (src[r])
	{
		r++;
	}
	if (dstsize == 0)
	{
		return (r);
	}
	while (src[x] && dstsize - 1 > x)
	{
		dst[x] = src[x];
		x++;
	}
	dst[x] = '\0';
	return (r);
}
/*
int main ()
{
	char dest[100];
	char dest2[100];
	ft_strlcpy(dest, "lorem ipsum dolor sit amet", 0);
    write(1, "\n", 1);
    write(1, dest, 15);

	ft_strlcpy(dest2, "lorem ipsum dolor sit amet", 0);
    write(1, "\n", 1);
    write(1, dest, 15);
}*/