/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdina <tdina@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 20:52:33 by tdina             #+#    #+#             */
/*   Updated: 2021/04/27 23:22:27 by tdina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src,
int c, size_t n)
{
	unsigned int		i;
	unsigned char		*ptr_d;
	const unsigned char	*ptr_s;

	i = 0;
	ptr_d = dst;
	ptr_s = src;
	while (i < n)
	{
		ptr_d[i] = ptr_s[i];
		i++;
		if ((unsigned char)ptr_d[i - 1] == (unsigned char)c)
			return (ptr_d + i);
	}
	return (NULL);
}
