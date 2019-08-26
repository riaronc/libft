/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odushko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 15:02:23 by odushko           #+#    #+#             */
/*   Updated: 2018/10/29 15:30:54 by odushko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *arr1, const void *arr2, size_t num)
{
	unsigned char	*a1;
	unsigned char	*a2;
	size_t			i;

	a1 = (unsigned char *)arr1;
	a2 = (unsigned char *)arr2;
	i = 0;
	while (i < num)
	{
		if (a1[i] != a2[i])
			return (a1[i] - a2[i]);
		i++;
	}
	return (0);
}
