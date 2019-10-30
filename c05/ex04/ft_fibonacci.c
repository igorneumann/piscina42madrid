/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 10:22:45 by ineumann          #+#    #+#             */
/*ig  Updated: 2019/09/26 10:54:37 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_fibonacci(int index)
{
	unsigned int r;
	
	r = index;
	if  (index < 0)
		return (-1);
	if	(index == 0)
		return (0);
	if (index == 1)
		return (1);
	if (index > 1)
	{
		r = ft_fibonacci(r - 1) + ft_fibonacci(r - 2);
	}
	return (r);
}
