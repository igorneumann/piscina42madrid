/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 21:13:45 by ineumann          #+#    #+#             */
/*   Updated: 2019/09/11 11:40:28 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int buffer;
	int count;
	int count2;

	count = 0;
	count2 = size;
	while (count <= count2)
	{
		while (count <= size)
		{
			if (tab[count] > tab[count + 1])
			{
				buffer = tab[count];
				tab[count] = tab[count + 1];
				tab[count + 1] = buffer;
			}
			count++;
		}
		count = 0;
		count2--;
	}
}
