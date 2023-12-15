/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakkas <zbakkas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 17:21:50 by zbakkas           #+#    #+#             */
/*   Updated: 2023/12/15 18:09:38 by zbakkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	re;

	re = 0;
	while (lst)
	{
		re++;
		lst = lst->next;
	}
	return (re);
}
/*
int main()
{
	t_list *t;
	t = malloc(sizeof(t_list));
	t->content ="hello";
	t->next = malloc(sizeof(t_list));
	t->next->content ="hh";
	t->next->next= malloc(sizeof(t_list));
	t->next->next->content ="hhf";
	t->next->next->next =NULL;

	printf("%d",ft_lstsize(t));

}*/
