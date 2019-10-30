/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 13:56:30 by ineumann          #+#    #+#             */
/*   Updated: 2019/09/23 14:00:25 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		check_str(char *str, char *to_find)
{
	while (*to_find != '\0')
	{
		if (*to_find != *str || *str == '\0')
			return (0);
		to_find++;
		str++;
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	int c;

	if (*to_find == '\0')
		return (str);
	c = 0;
	while (str[c] != '\0')
	{
		if (str[c] == *to_find)
		{
			if (check_str(&str[c], to_find))
				return (&str[c]);
		}
		c++;
	}
	return (NULL);
}
