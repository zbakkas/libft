/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakkas <zbakkas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 17:49:28 by zbakkas           #+#    #+#             */
/*   Updated: 2023/12/19 23:40:19 by zbakkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*re;

	if (!lst)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
	}
	re = lst;
	return (re);
}
/*
int main()
{
	char *s1 ="11";
	char *s2 = "22";

	t_list *lst = ft_lstnew("1");
	lst->next = ft_lstnew("2");
	t_list *re = ft_lstlast(lst);
	printf("%s",(char *)(re->content));
}*/