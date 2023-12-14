/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakkas <zbakkas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 18:55:05 by zbakkas           #+#    #+#             */
/*   Updated: 2023/12/08 22:16:31 by zbakkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>
char	*ft_strrchr(const char *str, int c)
{
	int		x;

	x = 0;
	while (str[x])
	{
		x++;
	}
	while (x >= 0)
	{
		if (str[x] == (char)c)
		{
			return ((char *)(str + x));
		}
		x--;
	}
	return (NULL);
}
/*
 int main ()
{
	    char *src = "abbbbbbbb";
        char *d1 = strrchr(src, 'a');
        char *d2 = ft_strrchr(src, 'a');
	printf("%s\n%s",d1,d2);
}*/