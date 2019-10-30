/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 21:12:27 by ineumann          #+#    #+#             */
/*   Updated: 2019/09/26 09:46:07 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_recursive_power(int nb, int power)
{
	int n;
	int p;
	long int res;

	p = power;
	n = nb;
	if (p == 1)
		res = n;
	else
	{
		res = ft_recursive_power(n, p - 1) * n;
	}
	return(res);
}
