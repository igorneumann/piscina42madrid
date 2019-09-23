/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stlen.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 13:08:10 by ineumann          #+#    #+#             */
/*   Updated: 2019/09/10 16:10:51 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	 ft_write(int counter)
{
	char c;
	int count2;

	count2 = counter;
	if (count2 > 10)
	   ft_write(count2 / 10);
	c = count2 % 10 + '0';
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int count;
	
	count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	if (count > 0)
		ft_write(count);
	return(count);
}
