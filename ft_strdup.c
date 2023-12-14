/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakkas <zbakkas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 21:45:20 by zbakkas           #+#    #+#             */
/*   Updated: 2023/12/09 16:32:14 by zbakkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>
int	lenn(char *s1)
{
	int	x;

	x = 0;
	while (s1[x])
	{
		x++;
	}
	return (x);
}

char	*ft_strdup(const char *s1)
{
	char	*re;
	int		x;

	x = 0;
	re = malloc(sizeof(char) * lenn((char *)s1) + 1);
	if (!re)
		return (NULL);
	while (s1[x])
	{
		re[x] = s1[x];
		x++;
	}
	re[x] = '\0';
	return (re);
}
/*
int main()
{

  const char *c = "this is a normal test";
	printf("%s\n",ft_strdup(c));
	printf("%s\n",strdup(c));


	int x=0;
	int xx=0;
	while(ft_strdup(c)[x])
	{x++;}
	printf("%d\n",x);

	while(strdup(c)[xx])
	{xx++;}
	printf("%d",xx);

}*/