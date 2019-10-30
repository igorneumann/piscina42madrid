/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 21:37:26 by ineumann          #+#    #+#             */
/*   Updated: 2019/09/24 20:12:57 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strlen(char *str);

int		main(void)
{
	char c[] = "O pato pateta cagou na caneca";

	printf("STRING: %s\nLENGHT: %lu\nFT_LENGHT: %u\n", c, strlen(c), ft_strlen(c));
	return (0);
}
