/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakkas <zbakkas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 17:27:52 by zbakkas           #+#    #+#             */
/*   Updated: 2023/12/21 17:23:24 by zbakkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int	x;

	x = 0;
	if (!dest && !src)
		return (NULL);
	while (*((char *)dest + x) == *((char *)src + x))
	{
		if (*((char *)dest + x) == '\0' && *((char *)src + x) == '\0')
			return (dest);
		x++;
	}
	x = 0;
	while (n > 0)
	{
		*((char *)dest + x) = *((char *)src + x);
		n--;
		x++;
	}
	return (dest);
}

// #include <string.h>
// int main()
// {
// 	char *s ="mm";
// 	char *d=" kmkmkm";
// 	printf("%s", memcpy("","hiki",4));
	
// }