/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odushko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 15:32:14 by odushko           #+#    #+#             */
/*   Updated: 2018/10/29 16:15:50 by odushko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	int		i;
	char	*buf;

	i = 0;
	buf = (char *)str;
	while (buf[i] != '\0' && buf[i] != (unsigned char)ch)
		i++;
	if (buf[i] == (unsigned char)ch)
		return (&buf[i]);
	return (NULL);
}
