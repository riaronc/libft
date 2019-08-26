/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odushko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 13:52:30 by odushko           #+#    #+#             */
/*   Updated: 2018/10/27 20:15:59 by odushko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	int		lenght;
	char	*dest;

	i = 0;
	lenght = ft_strlen(s1);
	dest = (char *)malloc(lenght + 1);
	if (!dest)
		return (NULL);
	while (i < lenght)
	{
		dest[i] = s1[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
