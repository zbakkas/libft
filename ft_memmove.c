/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakkas <zbakkas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 17:44:14 by zbakkas           #+#    #+#             */
/*   Updated: 2023/12/11 15:10:19 by zbakkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	if (str1 < str2)
		ft_memcpy(str1, str2, n);
	else
	{
		while (n--)
		{
			*((char *)(str1 + n)) = *((char *)(str2 + n));
		}
	}
	return (str1);
}
