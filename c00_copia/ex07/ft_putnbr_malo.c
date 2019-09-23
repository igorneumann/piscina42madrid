/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 10:20:35 by ineumann          #+#    #+#             */
/*   Updated: 2019/09/08 12:29:27 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int value;
	char letra;

	value = nb + '0' - 48;
		while (value >= 10)
		value = value / 10;
	letra = value + 48;
	write (1, &letra, 1);
	if (value > 10)
	{
		value = nb % 10;
		ft_putnbr(value);
	}
}

int		 main (void)
{
	ft_putnbr(500);
}
