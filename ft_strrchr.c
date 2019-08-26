/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odushko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 16:00:10 by odushko           #+#    #+#             */
/*   Updated: 2018/10/29 16:15:20 by odushko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	int		i;
	char	*buf;

	buf = (char *)str;
	i = 0;
	while (buf[i] != '\0')
		i++;
	while (buf[i] != (unsigned char)ch && i >= 0)
		i--;
	if (buf[i] == (unsigned char)ch)
		return (&buf[i]);
	return (NULL);
}
