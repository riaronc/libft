/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odushko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 09:03:08 by odushko           #+#    #+#             */
/*   Updated: 2018/10/31 09:44:18 by odushko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*a;

	a = NULL;
	a = (void *)malloc(size);
	if (!a)
		return (NULL);
	a = ft_memset(a, 0, size);
	return (a);
}
