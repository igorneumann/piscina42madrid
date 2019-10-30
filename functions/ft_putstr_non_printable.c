/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 12:29:14 by ineumann          #+#    #+#             */
/*   Updated: 2019/09/17 11:44:52 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	unsigned char hexa[2];

	while (*str != '\0')
	{
		if (*str > 31 && *str < 127)
			write(1, str, 1);
		else
		{
			if ((unsigned char)*str / 16 <= 9)
				hexa[0] = (unsigned char)*str / 16 + '0';
			else
				hexa[0] = (unsigned char)*str / 16 + 87;
			if ((unsigned char)*str % 16 <= 9)
				hexa[1] = (unsigned char)*str % 16 + '0';
			else
				hexa[1] = (unsigned char)*str % 16 + 87;
			write(1, "\\", 1);
			write(1, &hexa[0], 1);
			write(1, &hexa[1], 1);
		}
		str++;
	}
}
