/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odushko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/02 10:34:52 by odushko           #+#    #+#             */
/*   Updated: 2018/11/09 16:40:32 by odushko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*res;

	i = 0;
	j = 0;
	if (s1 && s2)
	{
		i = ft_strlen(s1);
		j = ft_strlen(s2);
		if (!(res = ft_strnew(i + j)))
			return (NULL);
		i = -1;
		while (s1[++i] != '\0')
			res[i] = s1[i];
		j = 0;
		while (s2[j] != '\0')
		{
			res[i + j] = s2[j];
			j++;
		}
		res[i + j] = '\0';
		return (res);
	}
	return (NULL);
}
