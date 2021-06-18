/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdina <tdina@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 01:46:01 by tdina             #+#    #+#             */
/*   Updated: 2021/05/04 01:46:01 by tdina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_allocate_string(int len, long int n, long int doz)
{
	char	*s;
	int		i;

	i = 0;
	s = malloc(sizeof(char) * (len + 1));
	if (s == NULL)
		return (NULL);
	if (n < 0)
	{
		s[0] = '-';
		i = 1;
		n *= -1;
	}
	while (doz != 0)
	{
		s[i++] = (int)(n / doz) + '0';
		n %= doz;
		doz /= 10;
	}
	s[i] = 0;
	return (s);
}

char	*ft_itoa(int n)
{
	unsigned int	len;
	long int		doz;

	len = 10;
	doz = 1000000000;
	if (n < 0)
		len = 11;
	while (n / doz == 0 && n != 0)
	{
		doz /= 10;
		len--;
	}
	if (n == 0)
	{
		len = 1;
		doz = 1;
	}
	return (ft_allocate_string(len, n, doz));
}
