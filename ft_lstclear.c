/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdina <tdina@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 04:58:17 by tdina             #+#    #+#             */
/*   Updated: 2021/05/04 04:58:17 by tdina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*curr;
	t_list	*next;

	if (lst != NULL && *lst != NULL)
	{
		curr = (*lst);
		next = (*lst)->next;
		while (curr != NULL)
		{
			ft_lstdelone(curr, del);
			curr = next;
			if (next != NULL)
				next = next->next;
		}
		*lst = NULL;
	}
}
