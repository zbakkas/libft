/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakkas <zbakkas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 21:27:33 by zbakkas           #+#    #+#             */
/*   Updated: 2023/12/14 15:49:24 by zbakkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	chick_l(int n)
{
	int	x;

	x = 0;
	if (n <=9 && n >= 0)
		return (1);
	if (n < 0)
	{
		n *= -1;
		x++; 
	}
	while (n != 0)
	{
		n = n / 10;
		x++;
	}
	return (x);
}

char	*ft_itoa(int n)
{
	char	*re;
	int		x;
	int		j;

	j = n;
	x = chick_l(n) -1;
	re = ft_calloc(chick_l(n) + 1, sizeof(char));
	if (n < 0)
		j *= -1;
	while (j != 0)
	{
		re[x--] = (j % 10) + '0';
		j = j / 10;
	}
	if (n < 0)
		re[x] = '-';
	return (re);
}
/*
int main()
{
	printf("%s",ft_itoa(NULL));
}*/