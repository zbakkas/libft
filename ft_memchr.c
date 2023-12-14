/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakkas <zbakkas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 19:44:26 by zbakkas           #+#    #+#             */
/*   Updated: 2023/12/09 19:58:57 by zbakkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	const void	*re;
	int			x;

	x = 0;
	re = str;
	while (*((char *)re + x) && n > x)
	{
		if (*((char *)re + x) == c)
		{
			return ((void *)re + x);
		}
		x++;
	}
	return (NULL);
}
/*
int main ()
{
	// printf("%s",ft_memchr("abcdocf",'c',10));
}*/