/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakkas <zbakkas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 16:36:48 by zbakkas           #+#    #+#             */
/*   Updated: 2023/12/10 15:44:19 by zbakkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h> //abcdef 2 10
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*re;
	int		x;

	if (!s)
	{
		return (NULL);
	}
	if (start >= ft_strlen(s))
		len = 0;
	else if (len > start + ft_strlen(s))
		len = ft_strlen(s) - start;
	re = ft_calloc(len + 1, sizeof(char));
	x = 0;
	while (len)
	{
		re[x++] = s[start++];
		len--;
	}
	re[start] = '\0';
	return (re);
}
/*
int main()
{
	char *s = "malloc protection !";
 
    char *ret = ft_substr(s, 0, 5);
	printf("%s",ret);
}*/