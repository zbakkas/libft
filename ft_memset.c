/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakkas <zbakkas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:04:01 by zbakkas           #+#    #+#             */
/*   Updated: 2023/12/09 15:43:47 by zbakkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	int	x;

	x = 0;
	while (len)
	{
		*((unsigned char *)(b + x)) = c;
		len--;
		x++;
	}
	return (b);
}
/*
int main ()
{
	char str[] = "gtjgbs";
	ft_memset(str, '0', 6);

	printf("%s", str);
}*/