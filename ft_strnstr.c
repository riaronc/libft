/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odushko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 08:43:26 by odushko           #+#    #+#             */
/*   Updated: 2018/10/30 08:57:22 by odushko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str1, const char *str2, size_t num)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (ft_strlen(str1) == 0 && ft_strlen(str2) != 0)
		return (NULL);
	else if (str2[i] == '\0')
		return ((char *)str1);
	while (str1[i] != '\0' && i < num)
	{
		j = 0;
		while (str1[i + j] == str2[j] && i + j < num)
		{
			if (str2[j + 1] == '\0')
				return ((char *)&str1[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
