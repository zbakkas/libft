/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakkas <zbakkas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 16:36:48 by zbakkas           #+#    #+#             */
/*   Updated: 2023/12/20 13:04:55 by zbakkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*re;
	int		x;

	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	re = malloc((len + 1));
	if (!re)
		return (NULL);
	x = 0;
	while (len)
	{
		re[x++] = s[start++];
		len--;
	}
	re[x] = '\0';
	return (re);
}

// int main()
// {
// 	char *s = "holaa!";
//     char *ret = ft_substr(s,2,5);
// 	printf("%s",ret);
// }