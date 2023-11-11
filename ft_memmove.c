/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elchakir <elchakir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 11:25:39 by elchakir          #+#    #+#             */
/*   Updated: 2023/11/10 21:15:14 by elchakir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*dst;
	char	*sr;
	dst = (char *)dest;
	sr = (char *)src;

	if(sr < dst)
	{
		i = n;
		while(i-- > 0)
		{
			dst[i] = sr[i];
		}
		return (dest);
	}
	ft_memcpy(dst,sr,n);
	return (dest);
}

// 00000000000000000011000000111001 1234
// 11111111111111111111111111111111
// 11111111111111111100111111000111
// 11111111111111111100111111000111 --> -1234 to represent negative number we convert 1 to 0 (using xor operation)and adding 1 in the last

