/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakkas <zbakkas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 17:27:52 by zbakkas           #+#    #+#             */
/*   Updated: 2023/12/19 23:37:19 by zbakkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int	x;

	x = 0;
	if (!dest && !src)
		return (NULL);
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
	int s =2580;
	int d=0;
	ft_memcpy(&d,&s,4);
	printf("%d",d);
}*/
