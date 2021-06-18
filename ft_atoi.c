/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdina <tdina@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 13:34:40 by tdina             #+#    #+#             */
/*   Updated: 2021/04/28 13:34:40 by tdina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_check_first_ch(const char *str, unsigned int *i, int *z)
{
	while ((str[*i] >= 9 && str[*i] <= 13) || str[*i] == 32)
		*i += 1;
	if (str[*i] == '-' && (str[*i + 1] >= '0' || str[*i + 1] <= '9'))
	{
		*z = -1;
		*i += 1;
	}
	else
	{
		if (str[*i] == '+')
			*i += 1;
	}
}

int	ft_atoi(const char *str)
{
	unsigned int	i;
	long int		r;
	int				z;

	i = 0;
	z = 1;
	r = 0;
	ft_check_first_ch(str, &i, &z);
	while (r < INT_MAX && (str[i] >= '0' && str[i] <= '9'))
	{
		r = r * 10 + str[i] - '0';
		i++;
	}
	if (r > INT_MAX && z == 1)
		return (INT_MAX);
	r *= z;
	if (r < INT_MIN)
		return (INT_MIN);
	return (r);
}
