/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 10:20:35 by ineumann          #+#    #+#             */
/*   Updated: 2019/09/08 12:39:38 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int value;
	char letra;
	chat counter;

	value = nb;

	counter = 0;
	if (++counter = 0)
		strrev(value);

		if (value >= 10)
		{
			letra = value % 10;
			letra = letra + 48;
			write (1, &letra, 1);
			value = value / 10;
			ft_putnbr(value);
		}

		if (nb < 10 && nb >= 0)
		
		{
			letra = value + 48;
			write (1, &letra, 1);
		}
}

int		 main (void)
{
	ft_putnbr(35738517);
}
