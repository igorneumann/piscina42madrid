/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 20:06:40 by ineumann          #+#    #+#             */
/*   Updated: 2019/09/24 20:50:51 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_factorial(int nb)
{
	int i;
	int res;
	
	res = nb;
	i = nb;
	if (nb < 1)
		return (0);
	if (nb == 1)
		return (1);
	while (i > 1)
	{
	   	i = i - 1;
		res = res * i;
	}
	return (res);	
}
