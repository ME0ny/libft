/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdina <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 20:21:08 by tdina             #+#    #+#             */
/*   Updated: 2021/04/26 20:51:50 by tdina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned int		i;
	unsigned char		*ptr;
	const unsigned char	*ptr_s;

	if (!dst && !src)
		return (NULL);
	ptr = dst;
	ptr_s = src;
	i = 0;
	while (i < n)
	{
		ptr[i] = ptr_s[i];
		i++;
	}
	return (ptr);
}
