/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 13:53:35 by ineumann          #+#    #+#             */
/*   Updated: 2019/09/08 18:16:14 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int		number;
	char	c;

	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	number = nb;
	if (number > 10)
		ft_putnbr(number / 10);
	c = number % 10 + '0';
	write(1, &c, 1);
}

int		main(void)
{
	ft_putnbr(3856);
	return (0);
}
