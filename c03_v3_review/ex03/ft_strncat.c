/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 11:51:24 by ineumann          #+#    #+#             */
/*   Updated: 2019/09/18 18:34:42 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int c;

	c = 0;
	while (dest[c])
		c++;
	while (*src && nb != 0)
	{
		dest[c] = *src;
		src++;
		c++;
		nb--;
	}
	dest[c] = '\0';
	return (dest);
}
