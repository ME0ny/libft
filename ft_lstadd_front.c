/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdina <tdina@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 04:35:24 by tdina             #+#    #+#             */
/*   Updated: 2021/05/04 04:35:24 by tdina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*start;
	t_list	*curr;

	curr = new;
	start = new;
	if (curr != NULL && lst != NULL && lst != NULL)
	{
		if (*lst == NULL)
			*lst = new;
		else
		{
			while (curr->next != NULL)
				curr = curr->next;
			curr->next = *lst;
			*lst = start;
		}
	}
}
