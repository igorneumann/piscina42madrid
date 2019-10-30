/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 11:33:23 by ineumann          #+#    #+#             */
/*   Updated: 2019/09/24 19:41:07 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int *ft_range(int min, int max);

int main(void)
{
	int *rtn;
	int i;
	int max;
	int min;
	
	i = 0;
	min = 5;
	max = 300;
	rtn = ft_range(min, max);
	while (i < (max - min))
	{
		printf("%d\n", rtn[i]);
		i++;
	}
	return (0);
}
