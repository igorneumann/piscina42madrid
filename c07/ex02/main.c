/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 11:32:17 by ineumann          #+#    #+#             */
/*   Updated: 2019/09/24 14:08:41 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int *rtn;
	int i;
	int min;
	int max;

	min = 5;
	max = 300;
	ft_ultimate_range(rtn, min, max);
	while (i > max - min)
	{
		printf("%d\n", rtn[i]);
		i++;
	}
	return (0);
}
