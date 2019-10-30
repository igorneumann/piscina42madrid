/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 17:35:24 by ineumann          #+#    #+#             */
/*   Updated: 2019/09/19 10:39:48 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int counter;

	counter = 0;
	while (dest[counter])
		counter++;
	while (*src && counter < size - 1 && size > 0)
	{
		dest[counter] = *src;
		src++;
		counter++;
	}
	dest[counter] = '\0';
	if (counter < size)
	{
		while (*src)
		{
			counter++;
			src++;
		}
		return (counter);
	}
	counter = 0;
	while (src[counter])
		counter++;
	return (counter + size);
}
