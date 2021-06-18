/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdina <tdina@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 15:28:23 by tdina             #+#    #+#             */
/*   Updated: 2021/04/30 15:28:23 by tdina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_word(char const *s, char c)
{
	int	i;
	int	j;
	int	flag;

	flag = 0;
	j = 0;
	i = 0;
	while (s[j] != 0)
	{
		if (s[j] != c && flag == 0)
		{
			i++;
			flag = 1;
		}
		if (s[j] == c)
			flag = 0;
		j++;
	}
	return (i);
}

static int	ft_count_char(const char *s, int i, char c)
{
	int	l;

	l = 0;
	while (s[i] != c && s[i] != 0)
	{
		l++;
		i++;
	}
	return (l);
}

static void	ft_free(char **arr, int j)
{
	int	i;

	i = 0;
	while (i < j)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

static char	*ft_allocate_str(const char *s, int *i, char c)
{
	int		len;
	char	*str;

	len = ft_count_char(s, *i, c);
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	ft_memcpy((void *)str, (void *)(s + *i), (size_t)(len));
	str[len] = 0;
	*i = *i + len - 1;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		i;
	int		j;

	i = -1;
	j = 0;
	if (s == NULL)
		return (NULL);
	arr = malloc(sizeof(char *) * (ft_count_word(s, c) + 1));
	if (arr == NULL)
		return (NULL);
	while (s[++i] != 0 )
	{
		if (s[i] == c)
			continue ;
		arr[j++] = ft_allocate_str(s, &i, c);
		if (arr[j - 1] == NULL)
		{
			ft_free(arr, j);
			return (NULL);
		}
	}
	arr[j] = NULL;
	return (arr);
}
