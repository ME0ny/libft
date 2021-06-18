/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdina <tdina@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 05:10:26 by tdina             #+#    #+#             */
/*   Updated: 2021/05/04 05:10:26 by tdina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_lstmap_curr(t_list *begin, t_list *curr, void *(*f)(void *)
, void (*del)(void *))
{
	t_list	*prev;
	t_list	*work;

	prev = begin;
	while (curr != NULL)
	{
		work = ft_lstnew(f(curr->content));
		if (work == NULL)
		{
			ft_lstclear(&begin, del);
			return (-1);
		}
		prev->next = work;
		prev = work;
		curr = curr->next;
	}
	return (1);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*begin;
	t_list	*curr;

	if (lst == NULL)
		return (NULL);
	curr = lst;
	begin = ft_lstnew(f(curr->content));
	if (begin == NULL)
		return (NULL);
	if (ft_lstmap_curr(begin, curr->next, f, del) == -1)
		return (NULL);
	return (begin);
}
