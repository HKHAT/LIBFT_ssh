/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elchakir <elchakir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 06:57:37 by elchakir          #+#    #+#             */
/*   Updated: 2023/11/05 15:33:23 by elchakir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putendl_fd(char *s, int fd)
{
	if(!s || fd < 0)
	{
		return;
	}
		ft_putstr_fd(s,fd);
	ft_putchar_fd('\n',fd);
}
