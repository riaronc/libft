/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odushko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 17:00:28 by odushko           #+#    #+#             */
/*   Updated: 2018/10/27 16:03:21 by odushko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *arr, int c, size_t num)
{
	unsigned char	*buf;
	int				i;
	int				n;

	n = (int)num;
	i = 0;
	buf = (unsigned char *)arr;
	while (i < n)
	{
		if ((unsigned char)c == buf[i])
			return (&buf[i]);
		i++;
	}
	return (NULL);
}
