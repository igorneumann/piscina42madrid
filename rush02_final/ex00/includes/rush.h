/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbergs-f <sbergs-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 18:29:11 by sbergs-f          #+#    #+#             */
/*   Updated: 2019/09/22 23:04:52 by sbergs-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <sys/stat.h>
# include <fcntl.h>

int		check_dictionary(char *name, int n);
void	do_magic(char *string, char *table);
int		copy_dic(char *name, char *argv);
int		main(int argc, char **argv);
char	*ft_strstr(char *str, char *to_find);
void	*ft_remove(char *str);
char	*ceros(int n, char f, char *z);
void	do_magic2(char *string, char *table);

#endif
