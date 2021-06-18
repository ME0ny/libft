/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdina <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 21:55:58 by tdina             #+#    #+#             */
/*   Updated: 2021/04/26 22:55:41 by tdina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*ptr_d;
	const unsigned char	*ptr_s;
	unsigned int		i;

	if (!dst && !src)
		return (NULL);
	ptr_d = dst;
	ptr_s = src;
	i = 0;
	if ((ptr_s >= ptr_d) || (ptr_d >= ptr_s + len))
	{
		while (i < len)
		{
			ptr_d[i] = ptr_s[i];
			i++;
		}
	}
	else
		while (len-- > 0)
			ptr_d[len] = ptr_s[len];
	return (ptr_d);
}
