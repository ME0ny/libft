/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdina <tdina@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 12:38:22 by tdina             #+#    #+#             */
/*   Updated: 2021/04/28 12:38:22 by tdina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	unsigned int	i;
	const char		*s;

	s = str;
	i = 0;
	while (s[i] != 0 && s[i] != ch)
		i++;
	if (s[i] == ch)
		return ((char *)(s + i));
	return (NULL);
}
