/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakkas <zbakkas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 16:29:49 by zbakkas           #+#    #+#             */
/*   Updated: 2023/12/15 23:41:02 by zbakkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!*lst)
	{
		*lst = new;
	}
	else
	{
		new->next = *lst;
		*lst = new;
	}
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

	ft_lstadd_front(&t,ft_lstnew("abc"));
	while (t)
	{
		printf("%s\n",t->content);
		t = t->next;
	}
	
}*/