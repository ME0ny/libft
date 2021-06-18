/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdina <tdina@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 12:47:44 by tdina             #+#    #+#             */
/*   Updated: 2021/04/28 12:47:44 by tdina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	int		i;
	char	*ptr;

	i = -1;
	ptr = NULL;
	while (str[++i] != 0)
		if (str[i] == ch)
			ptr = (char *)(str + i);
	if (str[i] == ch)
		ptr = (char *)(str + i);
	return (ptr);
}
