/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odushko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 16:04:16 by odushko           #+#    #+#             */
/*   Updated: 2018/10/27 19:05:32 by odushko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t num)
{
	size_t	i;
	char	*buf_dest;
	char	*buf_src;

	buf_dest = (char *)dest;
	buf_src = (char *)src;
	i = 0;
	while (i < num)
	{
		buf_dest[i] = buf_src[i];
		i++;
	}
	return (buf_dest);
}
