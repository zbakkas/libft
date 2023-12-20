/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakkas <zbakkas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 16:29:49 by zbakkas           #+#    #+#             */
/*   Updated: 2023/12/19 19:29:51 by zbakkas          ###   ########.fr       */
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
	t_list *lst = ft_lstnew("hello1");
	lst->next = ft_lstnew("hello2");
	lst->next->next= ft_lstnew("hello3");

	t_list *new = ft_lstnew("hello0");


	ft_lstadd_front(&lst,new);
	while (lst)
	{
		printf("%s\n",lst->content);
		lst = lst->next;
	}
	

}*/
