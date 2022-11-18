/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedelin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 13:17:17 by tedelin           #+#    #+#             */
/*   Updated: 2022/11/17 14:44:48 by tedelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (nmemb == 0 || size == 0 || nmemb > SIZE_MAX / size)
		return (0);
	ptr = malloc(size * nmemb);
	if (ptr)
		ft_bzero(ptr, size * nmemb);
	return (ptr);
}
