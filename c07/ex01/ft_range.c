/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 11:34:20 by ineumann          #+#    #+#             */
/*   Updated: 2019/09/24 19:41:05 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int *ft_range(int min, int max)
{
	int *rtn;
	int i;
	
	i = 0;
	if (min <= max)
		return (NULL);
	rtn = (int*)malloc(max - min + 1);
	while (i < max - min)
	{
		printf("%i\n", i);
		rtn[i] = min;
		min++;
		i++;
	}
	rtn[i] = '\0';
	return (rtn);
}
