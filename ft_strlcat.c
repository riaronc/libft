/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odushko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 17:00:43 by odushko           #+#    #+#             */
/*   Updated: 2018/10/29 17:22:41 by odushko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_strlcat(char *dest, const char *src, size_t num)
{
	size_t		i;
	size_t		j;
	size_t		l1;
	size_t		l2;

	i = 0;
	j = 0;
	l1 = ft_strlen(dest);
	l2 = ft_strlen(src);
	if (num <= l1)
		return (l2 + num);
	while (dest[i] != '\0' && i < num - 1)
		i++;
	while (src[j] && i < (num - 1))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (l1 + l2);
}
