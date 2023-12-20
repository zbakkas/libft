/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakkas <zbakkas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 17:21:50 by zbakkas           #+#    #+#             */
/*   Updated: 2023/12/19 19:34:54 by zbakkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	x;

	x = 0;
	while (lst)
	{
		x++;
		lst = lst->next;
	}
	return (x);
}
/*
int main()
{
	t_list *lst = ft_lstnew("1");
	lst->next = ft_lstnew("2");
	lst->next->next= ft_lstnew("3");
	lst->next->next->next= ft_lstnew("4");

	printf("%d",ft_lstsize(lst));
}*/