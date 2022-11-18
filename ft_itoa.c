/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedelin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 12:19:16 by tedelin           #+#    #+#             */
/*   Updated: 2022/11/15 21:07:43 by tedelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_nblen(int n)
{
	int	len;

	len = 1;
	if (n < 0)
	{
		len++;
	}
	while (n >= 10 || n <= -10)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static	char	*ft_strrev(char *str)
{
	int		len;
	int		i;
	char	tmp;

	len = 0;
	while (str[len])
		len++;
	len--;
	i = 0;
	while (i < len)
	{
		tmp = str[i];
		str[i] = str[len];
		str[len] = tmp;
		i++;
		len--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	int				i;
	int				nb_len;
	unsigned int	nbr;
	char			*str;

	i = 0;
	nb_len = ft_nblen(n);
	nbr = n;
	str = malloc(sizeof(char) * (nb_len + 1));
	if (str == 0)
		return (0);
	if (n < 0)
	{
		str[nb_len - 1] = '-';
		nbr = -n;
	}
	while (nbr >= 10)
	{
		str[i++] = (nbr % 10) + '0';
		nbr = nbr / 10;
	}
	str[i] = (nbr % 10) + '0';
	str[nb_len] = 0;
	return (ft_strrev(str));
}
