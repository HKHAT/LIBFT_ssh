/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elchakir <elchakir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 10:32:03 by elchakir          #+#    #+#             */
/*   Updated: 2023/11/08 20:09:47 by elchakir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

/*
this will count the number of splits
 it will have to do
*/

static	size_t	counter(char const *s, char c)
{
	size_t	i;
	size_t	nbr_splits;

	i = 0;
	nbr_splits = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != c && s[i])
		{
			while (s[i] != c && s[i])
				i++;
			nbr_splits++;
		}
	}
	return (nbr_splits);
}

//this one will jump between delimeters

static	char	*ft_delimeter_jumper(char *s, char c)
{
	size_t	i;

	i = 0;
	while ((s[i] == c) && (s[i]))
		i++;
	return (s + i);
}

//the main function itself
/*
It will preemptively allocate some reserved space for the split substrings,
check if the string is not a NULL,
and divide the string into substrings using the provided delimeter.
*/

char	**ft_split(char const *s, char c)
{
	size_t	len;
	size_t	size;
	size_t	i;
	char	**split;

	i = 0;
	len = counter(s, c);
	split = (char **)malloc(sizeof(char *) * (len + 1));
	if (!s || !split)
		return (NULL);
	else if (s && split)
	{
		while (i < len)
		{
			size = 0;
			s = ft_delimeter_jumper((char *)s, c);
			while ((((char *)s)[size]) && (((char *)s)[size] != c))
				size++;
			split[i] = ft_substr(s, 0, size);
			i++;
			s = s + size;
		}
		split[i] = NULL;
	}
	return (split);
}
