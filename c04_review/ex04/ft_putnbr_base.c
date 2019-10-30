/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 19:37:49 by ineumann          #+#    #+#             */
/*   Updated: 2019/09/24 09:30:56 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	do_magic(unsigned int nbr, char *base, int v)
{
	unsigned int c[2];

	while (base[c[0]] && v != 1)
		c[0]++;
	printf("1 %i\n", c[0]);
	c[1] = base[(nbr % c[0]) - 1] - '0';
	printf("%i\n", c[0]);
	if (nbr > c[0] - 1)
	{
		printf("%i\n%s\n", nbr / c[0], base);
		nbr = nbr / c[0];
		do_magic(nbr, base, 1);
	}
	write(1, &base[c[1]], 1);
}

void	ft_putnbr_base(unsigned int nbr, char *base)
{
	int				c[3];

	c[0] = 0;
	c[1] = 0;
	c[2] = 1;
	while (base[c[0]])
	{
		if (base[c[0]] == ' ' && base[c[0]])
			c[2] = 0;
		c[0]++;
	}
	if (c[0] < 2)
		c[2] = 0;
	c[0] = 0;
	while (base[c[0] + 1])
	{
		c[1] = c[0] + 1;
		while (base[c[1]])
		{
			if (base[c[0]] == base[c[1]] ||
			base[c[1]] == '+' || base[c[1]] == '-')
				c[2] = 0;
			c[1]++;
		}
		c[0]++;
	}
	if (c[2] == 1)
		write(1, "I really tried, guys\n", 21);
		write(1, "Sorry if I made you work harder...\n", 35);
		write(1, "And thanks for all the indirect help\n", 37);
		write(1, "The red pill wasnt that bad after all", 37);
//		do_magic(nbr, base, 0);
}
