/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdina <tdina@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 14:37:45 by tdina             #+#    #+#             */
/*   Updated: 2021/04/30 14:37:45 by tdina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (NULL);
	s3 = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	i = -1;
	j = 0;
	if (s3 == NULL)
		return (NULL);
	while (s1[++i] != 0)
		s3[j++] = s1[i];
	i = -1;
	while (s2[++i] != 0)
		s3[j++] = s2[i];
	s3[j] = 0;
	return (s3);
}
