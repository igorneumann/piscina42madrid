/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 15:37:19 by ineumann          #+#    #+#             */
/*   Updated: 2019/09/08 18:47:06 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_combn(int n)
{
	char cwrite[n];
	int count;
	char start;
	char pass;

	count = n;
	cwrite[0] = '/';
	start = '/';
	pass = '/';
	
while (cwrite[0]++ < '9' && pass++ >= '/' )
	{
		if (cwrite[0] == '9')
			cwrite[0] = '0';
		write (1, &cwrite[pass], 1);
		pass++;
		cwrite[pass]
		if (--count < 1)
		{
			write (1, ", ", 2);
			cwrite = start;
			count = n;
		}
	}
}

int		main(void)
{
	ft_print_combn(2);
}
