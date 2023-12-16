/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakkas <zbakkas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 22:47:34 by zbakkas           #+#    #+#             */
/*   Updated: 2023/12/16 16:47:20 by zbakkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lest;
	t_list	*emp;

	new_lest = NULL;
	while (lst && f)
	{
		emp = ft_lstnew(f(lst->content));
		if (!emp)
		{
			ft_lstclear(&new_lest, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lest, emp);
		lst = lst->next;
	}
	return (new_lest);
}
