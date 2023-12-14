/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakkas <zbakkas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 21:40:56 by zbakkas           #+#    #+#             */
/*   Updated: 2023/12/14 21:05:51 by zbakkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	int		x;
	char	*re;

	x = 0;
	re = malloc (count * size);
	if (!re)
	{
		return (NULL);
	}
	ft_bzero(re, size * count);
	return (re);
}
/*
int main()
{
    char c[20]="hfygrufugutg";
    printf("%s",ft_calloc(4,1));
}*/