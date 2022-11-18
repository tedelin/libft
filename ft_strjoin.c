/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedelin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 11:14:19 by tedelin           #+#    #+#             */
/*   Updated: 2022/11/15 16:28:14 by tedelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_total_len(char const *s1, char const *s2)
{
	int	total;

	total = 0;
	while (*s1)
	{
		s1++;
		total++;
	}
	while (*s2)
	{
		s2++;
		total++;
	}
	return (total);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	int		j;

	new = malloc(sizeof(char) * (ft_total_len(s1, s2) + 1));
	if (new)
	{
		j = 0;
		while (*s1)
		{
			new[j] = *s1;
			s1++;
			j++;
		}
		while (*s2)
		{
			new[j] = *s2;
			s2++;
			j++;
		}
		new[j] = '\0';
	}
	return (new);
}	
