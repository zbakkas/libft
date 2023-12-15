/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakkas <zbakkas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 18:20:08 by zbakkas           #+#    #+#             */
/*   Updated: 2023/12/15 23:23:14 by zbakkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if(!*lst)
		*lst = new;
	else
	{
		ft_lstlast(*lst)->next =new;
	}
}

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

	ft_lstadd_back(&t,ft_lstnew("x"));
	while(t)
	{
		printf("%s\n",t->content);
		t = t->next;
	}

}