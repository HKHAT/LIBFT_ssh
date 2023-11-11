/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elchakir <elchakir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 06:59:43 by elchakir          #+#    #+#             */
/*   Updated: 2023/11/10 17:22:03 by elchakir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
	long  nb;
	nb = (long)n;
	if(nb < 0)
	{
		write(fd,"-",1);
		nb = nb * -1;
	}
	if(nb / 10 == 0)
		ft_putchar_fd(nb + 48,fd);
	else
	{
		ft_putnbr_fd(nb / 10,fd);
		ft_putnbr_fd(nb % 10,fd);
	}
}
