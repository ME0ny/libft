/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdina <tdina@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 12:48:27 by tdina             #+#    #+#             */
/*   Updated: 2021/04/28 12:48:27 by tdina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	int		i;
	char	*d;

	d = dst;
	i = -1;
	if (size == 0)
		return (ft_strlen(src));
	while ((size_t)(++i) < (size - 1) && src[i] != 0)
		d[i] = src[i];
	d[i] = 0;
	return (ft_strlen(src));
}
