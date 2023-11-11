/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elchakir <elchakir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 17:50:04 by elchakir          #+#    #+#             */
/*   Updated: 2023/11/11 17:52:52 by elchakir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_list *ft_lstnew(void *content)
{
	t_list *new;
	new = (t_list*)malloc(sizeof(t_list));
	if(!new)
		return NULL;
	new->content = content;
	new->next = NULL;
	return new;
}
