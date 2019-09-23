/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 09:43:48 by ineumann          #+#    #+#             */
/*   Updated: 2019/09/07 10:27:26 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char comb[3];

	comb[0] = '/';
	while (comb[0]++ < '7')
	{
		comb[1] = comb[0];
		while (comb[1]++ < '8')
		{
			comb[2] = comb[1];
			while (comb[2]++ < '9')
			{
				write(1, &comb[0], 1);
				write(1, &comb[1], 1);
				write(1, &comb[2], 1);
				if (comb[0] != '7')
					write(1, ", ", 2);
			}
		}
	}
}

int		main(void)
{
	ft_print_comb();
	return (0);
}
