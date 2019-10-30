/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 18:19:45 by ineumann          #+#    #+#             */
/*   Updated: 2019/09/16 19:02:55 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int counter;

	counter = 0;
	while (*(src + counter) != '\0' && counter < n)
	{
		*(dest + counter) = *(src + counter);
		counter++;
	}
	while (counter < n)
	{
		*(dest + counter) = '\0';
		counter++;
	}
	return (dest);
}
