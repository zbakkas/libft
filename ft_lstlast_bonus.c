/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakkas <zbakkas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 17:49:28 by zbakkas           #+#    #+#             */
/*   Updated: 2023/12/15 23:23:55 by zbakkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	int	x;

	x = ft_lstsize(lst) - 1;
	while (lst && x)
	{
		lst = lst->next;
		x--;
	}
	return (lst);
}
/*
int main() 
{
	t_list *t;
	t =malloc(sizeof(t_list));
	t->content ="1node";
	t->next =malloc(sizeof(t_list));
	t->next->content = "2node";
	t->next->next = NULL;
   printf("%s",ft_lstlast(t)->content);
}*/