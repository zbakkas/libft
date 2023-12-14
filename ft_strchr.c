/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakkas <zbakkas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 18:38:54 by zbakkas           #+#    #+#             */
/*   Updated: 2023/12/08 23:14:21 by zbakkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>
char	*ft_strchr(const char *str, int c)
{
	int	x;

	x = 0;
	while (str[x])
	{
		if (str[x] == c)
		{
			return ((char *)(str + x));
		}
		x++;
	}
	if (str[x] == c)
	{
		return ((char *)(str + x));
	}
	return (NULL);
}
/*
int main ()
{
	printf("%s\n",ft_strchr("",'h'));
	printf("%s",strchr("",'h'));
}*/
