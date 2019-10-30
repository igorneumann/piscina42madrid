/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbergs-f <sbergs-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 15:17:18 by ineumann          #+#    #+#             */
/*   Updated: 2019/09/22 23:09:18 by sbergs-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

char	*ft_strstr(char *str, char *to_find)
{
	int cont1;
	int cont2;

	cont1 = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[cont1] != '\0')
	{
		cont2 = 0;
		while (to_find[cont2] == str[cont1 + cont2])
		{
			if (to_find[cont2 + 1] == '\0')
			{
				return (str + cont1);
			}
			cont2++;
		}
		cont1++;
	}
	return (0);
}

void	*ft_remove(char *str)
{
	int cont;

	cont = 0;
	while (str[cont] >= '0' && str[cont] <= '9')
		cont++;
	while ((str[cont] == ' ' || str[cont] == ':') && str[cont] != '\0')
		cont++;
	while (str[cont] != '\n' && str[cont] != '\0')
	{
		write(1, &str[cont], 1);
		cont++;
	}
	write(1, " ", 1);
	return (0);
}

char	*ceros(int n, char f, char *z)
{
	z[0] = f;
	z[n] = '0';
	z[n + 1] = '\0';
	while (n-- > 1)
		z[n] = '0';
	return (z);
}
