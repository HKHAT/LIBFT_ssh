/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elchakir <elchakir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 11:56:02 by elchakir          #+#    #+#             */
/*   Updated: 2023/11/11 18:39:36 by elchakir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int ft_lstsize(t_list *lst)
{
	size_t i;
	i = 0;
	while(lst != NULL)
	{
		lst = lst->next;
		i++;
	}
return i;
}

// #include <stdio.h>
// int	main()
// {
// 	char *s = "mehdi";
// 	char *r = "zero";
// 	 char *y = "mk";
// 	t_list *new = ft_lstnew(s);
// 	t_list *a = ft_lstnew(r);
// 	t_list *b = ft_lstnew(y);
// 	t_list *c = ft_lstnew(r);
// 	ft_lstadd_front(&new,a);
// 	ft_lstadd_front(&a,b);
// 	ft_lstadd_front(&b,c);
// 	while(new != NULL)
// 	{
// 		printf("%s\n",*(char **)new->content);
// 		new = new->next;
// 	}}
