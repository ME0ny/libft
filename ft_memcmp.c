/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdina <tdina@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 23:23:44 by tdina             #+#    #+#             */
/*   Updated: 2021/04/27 23:23:44 by tdina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int			i;
	const unsigned char		*dst;
	const unsigned char		*str;

	i = 0;
	dst = s1;
	str = s2;
	while (dst[i] == str[i] && i < n)
		i++;
	if (i != n)
		return ((unsigned char)dst[i] - (unsigned char)str[i]);
	return (0);
}
