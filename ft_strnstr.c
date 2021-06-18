/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdina <tdina@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 12:53:31 by tdina             #+#    #+#             */
/*   Updated: 2021/04/28 12:53:31 by tdina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (*needle == 0 || needle == NULL)
		return ((char *)haystack);
	while (haystack[i] != 0 && (size_t)i < len)
	{
		while (needle[j] == haystack[i + j] && (size_t)(i + j) < len)
		{
			j++;
			if (needle[j] == 0)
				return ((char *)(haystack + i));
		}
		j = 0;
		i++;
	}
	return (NULL);
}
