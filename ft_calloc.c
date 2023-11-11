/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elchakir <elchakir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 20:58:11 by elchakir          #+#    #+#             */
/*   Updated: 2023/11/02 15:21:28 by elchakir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
	void *p;
	if(!nmemb || !size)
	{
		p = malloc(0);
		return p;
	}

	size_t	total;
	total = nmemb * size;
	if(total / nmemb != size)
		return NULL;
	p = malloc(total);
	if(!p)
	{
		return NULL;
	}
		ft_bzero(p,total);
	return (p);
}
