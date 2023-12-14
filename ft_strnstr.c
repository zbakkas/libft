/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakkas <zbakkas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 14:31:44 by zbakkas           #+#    #+#             */
/*   Updated: 2023/12/08 18:16:49 by zbakkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	x;
	int	i;

	x = 0;
	if (needle[0] == '\0')
	{
		return ((char *)haystack);
	}
	while (haystack[x] && len > x)
	{
		i = 0;
		while (needle[i] == haystack[x + i] && len > x + i)
		{
			if (needle[i + 1] == '\0')
			{
				return ((char *)(haystack + x));
			}
			i++;
		}
		x++;
	}
	return (0);
}
/*
int main ()
{
	printf("%s \n",ft_strnstr("aaaaaaabnhht","ab",7));
	printf("%s",strnstr("aaaaaaabnhht","ab",7));
}*/