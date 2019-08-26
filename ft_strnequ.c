/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odushko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 12:51:39 by odushko           #+#    #+#             */
/*   Updated: 2018/10/31 12:55:16 by odushko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t	i;
	int		l1;
	int		l2;

	if (s1 && s2)
	{
		i = 0;
		l1 = ft_strlen(s1);
		l2 = ft_strlen(s2);
		while (s1[i] == s2[i] && s1[i] != '\0' && i < n)
			i++;
		if (s1[i] == '\0' || i == n)
			return (1);
	}
	return (0);
}
