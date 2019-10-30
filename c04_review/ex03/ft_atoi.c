/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 19:11:41 by ineumann          #+#    #+#             */
/*   Updated: 2019/09/24 09:29:39 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	check_negative(int *c, int *n, char *str)
{
	while (str[*n] == ' ' || str[*n] == '\t' || str[*n] == '\n'
		|| str[*n] == '\v' || str[*n] == '\f' || str[*n] == '\r')
		(*n)++;
	while (str[*n])
	{
		while (str[*n] == '-' || str[*n] == '+')
		{
			if (str[*n] == '-')
				(*c)++;
			(*n)++;
		}
		if (*c > 0)
			break ;
		(*n)++;
	}
}

int		ft_atoi(char *str)
{
	int		r;
	int		c[2];
	int		n;

	c[0] = 0;
	n = 0;
	r = 0;
	check_negative(&c[0], &n, str);
	if (str[n] < 48 || str[n] > 57)
		return (0);
	if (c[0] % 2 == 0)
		c[1] = 1;
	while (str[n] >= '0' && str[n] <= '9')
		n++;
	n--;
	c[0] = 1;
	while (str[n] >= '0' && str[n] <= '9')
	{
		r = r + ((str[n] - 48) * c[0]);
		c[0] *= 10;
		n--;
	}
	if (c[1] != 1)
		r = -r;
	return (r);
}
