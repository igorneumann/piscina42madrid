/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 09:42:10 by ineumann          #+#    #+#             */
/*   Updated: 2019/09/21 11:03:43 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

char dictionary(char name, int n)
{
#include <name>

}

int main(int argc,char **argv)
{
	int n;
	char *name;

	name = "numbers.dict";
	n = 0;
	if (argc < 2 && argc > 3)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	while (argv[argc - 1][n])
	{
		if (argv[argc - 1][n] > '9' || argv[argc - 1][n] < '0')
		{
			write(1,"Error\n", 6);
	   		return (0);
		}
		n++;
	}
	dictionary(name, argv[1][n]);
	return (0);
}
