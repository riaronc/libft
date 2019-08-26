/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odushko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 12:59:29 by odushko           #+#    #+#             */
/*   Updated: 2018/10/31 14:38:00 by odushko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	char			*res;

	if (s)
	{
		i = 0;
		if (!(res = ft_strnew(len)))
			return (NULL);
		while (len--)
		{
			res[i] = s[start + i];
			i++;
		}
		return (res);
	}
	return (NULL);
}
