/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ineumann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 14:11:01 by ineumann          #+#    #+#             */
/*   Updated: 2019/09/12 14:14:33 by ineumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	unsigned int counter;

	counter = 0;
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
		counter++;
	}
	*dest = *src;
	return (dest - counter);
}
