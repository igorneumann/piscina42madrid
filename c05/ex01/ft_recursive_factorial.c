/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 20:29:15 by ineumann          #+#    #+#             */
/*   Updated: 2019/09/24 20:58:58 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_factorial(int nb)
{
	int res;
	
	if (nb < 1)
		return (0);
	else if (nb == 1)
		return (1);
	else
		res = nb * ft_recursive_factorial(nb -1);
	return (res);
}
