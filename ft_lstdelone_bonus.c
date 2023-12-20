/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakkas <zbakkas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 19:04:48 by zbakkas           #+#    #+#             */
/*   Updated: 2023/12/19 22:18:51 by zbakkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	del(lst->content);
	free(lst);
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
	
	while (lst)
	{
		
		printf("%s\n",lst->content);
		lst = lst->next;
		ft_lstdelone(lst,del);
	}
	
}*/