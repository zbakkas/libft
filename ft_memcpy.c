/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakkas <zbakkas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 17:27:52 by zbakkas           #+#    #+#             */
/*   Updated: 2023/12/08 17:51:42 by zbakkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int	x;

	x = 0;
	while (n > 0)
	{
		*((char *)dest + x) = *((char *)src + x);
		n--;
		x++;
	}
	return (dest);
}
/*
int main()
{
	char s[50] ={"frffr"};
	char d[50]={"aaaaa"};
	ft_memcpy(d+2,s,3);
	printf("%s",d);
}*/