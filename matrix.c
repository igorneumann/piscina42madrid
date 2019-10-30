/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjauregu <mjauregu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 17:24:38 by mjauregu          #+#    #+#             */
/*   Updated: 2019/09/23 18:39:24 by mjauregu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include  <libkern/OSCacheControl.h>

int main (void)
{
    cache = arr[matrix length][matrix[0]lenght]
    result = 0

    while(i = 0; i<matrix length; i++)
    {
        while(j = 0; j< matrix[i]length; j++)
        {
            if(i == 0 || j == 0)
            else if ( matrix[i][j]>0){
                cache [i][j] = 1 + min( cache[i][j-1],
                                        cache[i-1][j],
                                        cache[i-1[j-1]])
                {
                    if (cache[i][j]>result)result = cache [i][j];
                }
            }
        }
    }
    return result 
}