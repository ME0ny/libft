/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdina <tdina@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 22:56:08 by tdina             #+#    #+#             */
/*   Updated: 2021/04/29 00:34:43 by tdina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int			i;
	const char	*ptr;

	ptr = s;
	i = -1;
	while (++i < (int)n)
		if (ptr[i] == c)
			return ((void *)(s + i));
	return (NULL);
}
