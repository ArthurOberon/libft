/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoberon <aoberon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 17:59:45 by aoberon           #+#    #+#             */
/*   Updated: 2022/11/13 18:11:30 by aoberon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result_lst;
	t_list	*tmp;

	result_lst = NULL;
	while (lst)
	{
		tmp = ft_lstnew(f(lst->content));
		if (!tmp)
		{
			ft_lstclear(&result_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&result_lst, tmp);
		lst = lst->next;
		tmp = tmp->next;
	}
	ft_lstadd_back(&result_lst, tmp);
	return (result_lst);
}
