/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BSQ.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <ineumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 18:27:51 by ineumann          #+#    #+#             */
/*   Updated: 2019/09/25 22:19:52 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

int		main(int argc, char **argv)
{
	int		fd;
	char	*map;
	char	c;
	int		i;

	i = argc;
	i = 0;
	map = 0;
	fd = open(argv[1], O_RDONLY);
	while (read(fd, &c, 1))
		i++;
	close(fd);
	fd = open(argv[1], O_RDONLY);
	map = (char*)malloc(i * sizeof(char));
	read(fd, map, i);
	map[i - 1] = '\0';
	close(fd);
	fd = open("42", O_RDONLY);
	map = map + 5;
	read(fd, map, 196);
	map = map - 5;
	close(fd);
	ft_putstr(map);
	free(map);
	return (0);
}
