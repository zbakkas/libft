/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakkas <zbakkas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 18:44:15 by zbakkas           #+#    #+#             */
/*   Updated: 2023/12/21 18:03:59 by zbakkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	x;
	int	re;
	int	sin;

	x = 0;
	re = 0;
	sin = 1;
	while ((str[x] >= 9 && str[x] <= 13) || str[x] == 32)
		x++;
	if (str[x] == '-')
	{
		sin *= -1;
		x++;
	}
	else if (str[x] == '+')
		x++;
	while (str[x] >= 48 && str[x] <= 57)
	{
		re *= 10;
		re += str[x] - 48;
		x++;
	}
	return (re * sin);
}

// int main()
// {//9223372036854775807
// //-9223372036854775808    ==> 19
//     char str[]="-9223372036854775807";
//     printf("%d\n",ft_atoi(str));
//    printf("%d",atoi(str));
// }