/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdina <tdina@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 01:07:41 by tdina             #+#    #+#             */
/*   Updated: 2021/04/29 01:07:41 by tdina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	unsigned int	i;
	unsigned int	size;
	char			*ptr;

	if (!str)
		return (NULL);
	size = ft_strlen(str);
	ptr = malloc(sizeof(char) * (size + 1));
	i = 0;
	if (ptr == NULL)
		return (NULL);
	while (str[i] != 0)
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = 0;
	return (ptr);
}
