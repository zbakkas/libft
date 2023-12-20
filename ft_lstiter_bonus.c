/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakkas <zbakkas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 21:54:19 by zbakkas           #+#    #+#             */
/*   Updated: 2023/12/19 23:33:57 by zbakkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
void del(void * d)
{
	printf("%s\n",d);
}
int main()
{
	
	t_list *lst = ft_lstnew(ft_strdup("111"));
	lst->next = ft_lstnew(ft_strdup("222"));
	lst->next->next= ft_lstnew(ft_strdup("333"));
	ft_lstiter(lst,del);

	
}*/