/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdina <tdina@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 14:29:06 by tdina             #+#    #+#             */
/*   Updated: 2021/04/30 14:29:06 by tdina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*as;
	int		len_s;

	len_s = ft_strlen(s);
	if (s == NULL || len_s < (int)start)
		return (NULL);
	if ((int)len > len_s)
		len = len_s;
	i = -1;
	as = malloc(sizeof(char) * (len + 1));
	if (as == NULL)
		return (NULL);
	while (++i < (int)len && s[i] != 0)
		as[i] = s[i + start];
	as[i] = 0;
	return (as);
}
