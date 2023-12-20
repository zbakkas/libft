/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakkas <zbakkas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 18:20:08 by zbakkas           #+#    #+#             */
/*   Updated: 2023/12/19 23:50:14 by zbakkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*re;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	re = *lst;
	while (re->next)
	{
		re = re->next;
	}
	re->next = new;
	lst = &re;
}
/*
int main()
{
	t_list *nn = ft_lstnew("1");
	nn->next = ft_lstnew("2");
	nn->next->next = ft_lstnew("3");

	t_list *new =ft_lstnew("5");
	ft_lstadd_back(&nn,new);
	while (nn)
	{
		printf("%s\n",nn->content);
		nn= nn->next;
	}
	

}*/