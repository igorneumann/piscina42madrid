/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbergs-f <sbergs-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 09:42:10 by ineumann          #+#    #+#             */
/*   Updated: 2019/09/22 23:04:28 by sbergs-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int		check_dictionary(char *name, int n)
{
	while (name[n])
	{
		if (name[0] > '9' || name[0] < '0')
			return (0);
		while (name[n] >= '0' && name[n] <= '9')
			n++;
		if (name[n] != ' ' && name[n] != ':')
			return (0);
		while (name[n] == ' ')
			n++;
		if (name[n] != ':')
			return (0);
		n++;
		if (name[n] != ' ' && (name[n] > 126 || name[n] < 32))
			return (0);
		while (name[n] == ' ')
			n++;
		if (name[n] > 126 || name[n] < 32)
			return (0);
		while (name[n] != '\n')
			n++;
		n++;
	}
	return (1);
}

void	do_magic(char *string, char *table)
{
	char *uno;
	char *dos;

	(void)string;
	uno = "40";
	dos = "2";
	ft_remove(ft_strstr(&table[0], uno));
	ft_remove(ft_strstr(&table[0], dos));
}

int		copy_dic(char *name, char *argv)
{
	int		fd;
	char	buffer[2000];
	int		num;

	num = 0;
	fd = open(name, O_RDONLY);
	read(fd, buffer, 692);
	buffer[691] = '\0';
	close(fd);
	if (check_dictionary(&buffer[0], num))
	{
		do_magic(argv, &buffer[0]);
		return (1);
	}
	if (!(check_dictionary(buffer, num)))
		write(1, "Dict Error", 10);
	return (0);
}

int		main(int argc, char **argv)
{
	int		n;
	char	*name;

	name = "numbers.dict";
	n = 0;
	while (argv[argc - 1][n])
	{
		if (argv[argc - 1][n] > '9' || argv[argc - 1][n] < '0' || argc > 3)
		{
			write(1, "Error", 5);
			return (0);
		}
		n++;
	}
	if (argc == 3)
		copy_dic(&argv[1][0], &argv[argc - 1][0]);
	if (argc == 2)
		copy_dic(&name[0], &argv[argc - 1][0]);
	write(1, "\n", 1);
	return (0);
}
