/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elchakir <elchakir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 11:57:33 by elchakir          #+#    #+#             */
/*   Updated: 2023/11/05 14:31:18 by elchakir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *nptr)
{
	int i;
	int s;
	long long int	nb;
	nb = 0;
	i = 0;
	s = 1;
	while(ft_isspace(nptr[i]))
	{
		i++;
	}
	while(nptr[i] == '+' || nptr[i] == '-')
	{
		if(nptr[i + 1] == '-' || nptr[i + 1] == '+')
		{
			return 0;
		}
		if (nptr[i] == '-')
		{
			s *= - 1;
		i++;
		}
		else
		{
			i++;
		}
	}
	while(nptr[i] && nptr[i] >= 48 && nptr[i] <= 57)
	{
		nb  = nb * 10 + nptr[i] - 48;
		if(nb >= LLONG_MAX )
		{
			return -1;
		}
		else if( nb <= LLONG_MIN)
		{
			return 0;
		}

		i++;
	}
	return (nb * s);
}
