/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 21:00:11 by ineumann          #+#    #+#             */
/*   Updated: 2019/09/26 09:26:26 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_power(int nb, int power)
{
	int c;
	long int res;

	res = nb;
	c = power;
	if (power == 0 && nb == 0)
		return (1);
	if (power == 0)
		return (0);
	while (c > 1)
	{
		res = res * nb;
		c--;
	}
	return (res);
}
