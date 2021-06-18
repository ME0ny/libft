/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdina <tdina@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 03:24:43 by tdina             #+#    #+#             */
/*   Updated: 2021/05/04 03:24:43 by tdina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_check_minus(int znak, int *temp, char *s)
{
	if (znak < 0)
	{
		s[10 - *temp] = '-';
		*temp = *temp + 1;
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	char		s[11];
	long int	n2;
	int			znak;
	int			temp;

	znak = 0;
	temp = 0;
	n2 = n;
	if (n2 < 0)
	{
		znak = -1;
		n2 *= -1;
	}
	while (n2 >= 10)
	{
		s[10 - temp] = (int)(n2 % 10) + '0';
		n2 /= 10;
		temp++;
	}
	s[10 - temp] = n2 + '0';
	temp++;
	ft_check_minus(znak, &temp, s);
	write(fd, &s[11 - temp], temp);
}
