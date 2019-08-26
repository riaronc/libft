/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odushko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 16:17:03 by odushko           #+#    #+#             */
/*   Updated: 2018/10/27 20:09:50 by odushko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, void *src, int c, size_t num)
{
	unsigned char	*buf_dest;
	unsigned char	*buf_src;
	size_t			i;

	buf_dest = (unsigned char *)dest;
	buf_src = (unsigned char *)src;
	i = 0;
	while (i < num)
	{
		buf_dest[i] = buf_src[i];
		if (buf_src[i] == (unsigned char)c)
			return (buf_dest + i + 1);
		i++;
	}
	return (NULL);
}
