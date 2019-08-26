/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odushko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 16:39:34 by odushko           #+#    #+#             */
/*   Updated: 2018/10/27 13:50:24 by odushko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t num)
{
	size_t	i;
	char	*buf_src;
	char	*buf_dest;

	buf_dest = (char *)dest;
	buf_src = (char *)src;
	if (buf_dest > buf_src)
	{
		i = num;
		while (i > 0)
		{
			buf_dest[i - 1] = buf_src[i - 1];
			i--;
		}
	}
	else if (buf_dest < buf_src)
		ft_memcpy(buf_dest, buf_src, num);
	return (buf_dest);
}
