/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakkas <zbakkas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 19:44:26 by zbakkas           #+#    #+#             */
/*   Updated: 2023/12/19 23:37:08 by zbakkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	const void	*re;
	int			x;

	x = 0;
	re = str;
	while (n > x)
	{
		if (*((unsigned char *)re + x) == (unsigned char)c)
		{
			return ((void *)re + x);
		}
		x++;
	}
	return (NULL);
}
/*
#include <string.h>
int main ()
{
  int x[]={1,2,3,4,5,6};
  int *i = memchr(x,2,sizeof(x));
  int j=0;
  while(i[j])
  {
  printf("%d",i[j]);
  j++;
  }

}*/