/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 11:35:19 by ineumann          #+#    #+#             */
/*   Updated: 2019/09/26 13:38:38 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		calc_sqrt(long unsigned int n, unsigned int l, unsigned int h)
{
	long unsigned int m;

	m = l + ((h - l) / 2);
	if (m * m == n)
		return (m);
	if (l > h)
		return (0);
	if (m * m < n)
		return (calc_sqrt(n, m + 1, h));
	else
		return (calc_sqrt(n, l, m - 1));
}

int 	ft_sqrt(int nb)
{
	if (nb > 0)
		return (calc_sqrt(nb, 0, nb));	
	return (0);
}
