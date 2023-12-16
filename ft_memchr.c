/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakkas <zbakkas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 19:44:26 by zbakkas           #+#    #+#             */
/*   Updated: 2023/12/16 19:58:43 by zbakkas          ###   ########.fr       */
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
			return ((void *)re + x);
		}
		x++;
	}
	return (NULL);
}
/*
int main ()
{
	int s[]={1,2,3,4,5};
	int *ptr = ft_memchr(s,2,5*4);
	printf("%d",*ptr);

}*/