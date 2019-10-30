/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 13:35:42 by ineumann          #+#    #+#             */
/*   Updated: 2019/09/24 14:07:44 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_ultimate_range(int **range, int min, int max)
{
	int i;

	i = 0;
	if (min >= max)
	{
		range = '\n';
		return (0);
	}
	else
	{
		range = (int*)malloc(max - min + 1);
		while (min < max)
		{
			range[i] = min;
			min++
			i++
		}
		range[i] = '\0';

	}
	if (min != max)
		return (-1);
	return (i);
}
