/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakkas <zbakkas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 20:05:57 by zbakkas           #+#    #+#             */
/*   Updated: 2023/12/19 22:38:34 by zbakkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*nexttte;

	while (*lst)
	{
		nexttte = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = nexttte;
	}
	*lst = NULL;
}
/*
void del(void * d)
{
	free(d);
}

int main()
{
	
	t_list *lst = ft_lstnew(ft_strdup("111"));
	lst->next = ft_lstnew(ft_strdup("222"));
	lst->next->next= ft_lstnew(ft_strdup("444"));
	ft_lstclear(&lst,del);
	while (lst)
	{
		
		printf("%s\n",lst->content);
		lst = lst->next;

	}
	
}*/
