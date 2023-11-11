/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoaold.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elchakir <elchakir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 09:31:16 by elchakir          #+#    #+#             */
/*   Updated: 2023/11/10 08:42:55 by elchakir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	lenght(int n)
{
	int	i;
	long nb;
	i = 1;
	nb = (long)n;
	if( n < 0)
	{
	n = n * - 1;
	nb = n;
	i++;
	}

	if(n < 10)
	{
		return (i);
	}
	else if(n >= 10)
	{
		while( nb / 10 != 0)
		{
			nb = nb / 10;
			i++;
		}
	}
	return i;
}

char *ft_strcpy(char *s1,char *s2)
{
	int i;
	i = 0;
	while(s1[i])
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return s2;
}

char *itoa_r(long n, char *s)
 {
	long nb;
	nb = n;

	if (n == 0)
	{
		return ft_strcpy(s, "0");
	}

	if (nb == -2147483647)
	 {
		return ft_strcpy(s, "21474836478");
	}

	s[0] = '\0';
return s;
}

char *itoa_n(char *s,long  n)
{
	int len;
	int i;
	int j;
	j = 0;
	i = 0;
	len= lenght(n);
	i = len - 1;
	if( n < 0)
	{
		s[0] = '-';
		n = n * -1;
		j = 1;
	}
	while(i >= j)
	{
		s[i] = (n % 10) + 48;
		n = n / 10;
		i--;
	}
		s[len] = '\0';
	return s;
}
char *ft_itoa(int n)
{
	long  nb;
	int len;
	char *s;
	nb = (long)n;
	len = lenght(nb);
	s = (char *)malloc((sizeof(char) * len) + 1);
	if(!s)
	return NULL;

	// if(nb == -2147483647 - 1)
	// {
	//   return ft_strcpy(s,"-2147483648");
	// }

	if(nb == 0 || nb == -2147483647)
	return(itoa_r(nb,s));


  return itoa_n(s,nb);

}
