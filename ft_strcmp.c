/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odushko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 08:57:44 by odushko           #+#    #+#             */
/*   Updated: 2018/10/30 09:10:45 by odushko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *str1, const char *str2)
{
	int	i;

	i = 0;
	if (ft_strlen(str1) > ft_strlen(str2))
		return (1);
	else if (ft_strlen(str1) < ft_strlen(str2))
		return (-1);
	while (str1[i] != '\0')
	{
		if (str1[i] == str2[i])
			i++;
		else if (str1[i] > str2[i])
			return (str1[i] - str2[i]);
		else if (str1[i] < str2[i])
			return (str1[i] - str2[i]);
	}
	return (str1[i] - str2[i]);
}
