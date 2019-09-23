/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 14:48:37 by ineumann          #+#    #+#             */
/*   Updated: 2019/09/08 22:29:13 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char c0, char c1, char c2, char c3)
{
	write(1, &c0, 1);
	write(1, &c1, 1);
	write(1, " ", 1);
	write(1, &c2, 1);
	write(1, &c3, 1);
	if (c3 < '9' || c2 < '9' || c1 < '8' || c0 < '9')
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	char c0;
	char c1;
	char c2;
	char c3;

	c0 = '/';

	while (c0++ < '9' && c0 >= '/')
	{
		c1 = '/';
		while (c1++ < '9' && c1 >= '/')
		{
			c2 = c0 - 1;
			c3 = c1;
			while (c2++ < '9' && c2 >= '/')
			{
				while (c3++ < '9' && c3 >= '/' && c0 >= c1 && c2 >= c3)
				{
					ft_print(c0, c1, c2, c3);
				}
				c3 = '/';
			}
		}
	}
}

int		 main()
{
	ft_print_comb2();
	return (0);
}
