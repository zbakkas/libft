/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakkas <zbakkas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 22:47:34 by zbakkas           #+#    #+#             */
/*   Updated: 2023/12/20 23:40:59 by zbakkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*elm;
	void	*v;

	if (!lst)
		return (NULL);
	new = NULL;
	while (lst)
	{
		v = f(lst->content);
		elm = ft_lstnew(v);
		if (!elm)
		{
			del(v);
			ft_lstclear(&new, del);
			return (NULL);
		}
		ft_lstadd_back(&new, elm);
		lst = lst->next;
	}
	return (new);
}
/*
void f(void *c)
{
	printf("%s\n",c);
}
void del(void *c)
{
	free(c);
}

void *nto(void *c)
{
	char *re;
	int x =0;
	re = ft_strdup((char *)c);
	while(re[x])
	{
		if(re[x]=='2'|| re[x]=='4'||re[x]=='6')
		{
			re[x]='0';
		}
		x++;
	}
	return re;
	
}

int main()
{
	int x = 10;
	int i =222;
	t_list *lst = ft_lstnew(ft_strdup("1"));
	while(x)
	{
		ft_lstadd_back(&lst,ft_lstnew(ft_strdup(ft_itoa(++i))));
		x--;
	}
	t_list *re= ft_lstmap(lst,nto,del);
	ft_lstiter(re,f);
	
}*/
