/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakkas <zbakkas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 20:05:57 by zbakkas           #+#    #+#             */
/*   Updated: 2023/12/15 21:53:15 by zbakkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	while (*lst)
	{
		//ft_lstdelone(*lst, del);
		//free(lst);
		//*lst = (*lst)->next;
		t_list *temp = (*lst)->next;
        ft_lstdelone(*lst, del);
        *lst = temp;
	}
	*lst = NULL;
}

void free_int(void *data)
{
    free(data);
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

	ft_lstclear(&t,free_int);
	printf("%p",(void*)t);

}