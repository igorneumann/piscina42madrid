/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 10:22:03 by ineumann          #+#    #+#             */
/*   Updated: 2019/09/24 14:11:57 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char *ft_strdup(char *src);

int main (void)
{
	char *src = "1234567890";

	printf("la original %s\nstrdup es %s\nft_strdup es %s\n", src, strdup(src), ft_strdup(src));
	return (0);
}
