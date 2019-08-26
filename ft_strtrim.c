/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odushko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/02 13:13:15 by odushko           #+#    #+#             */
/*   Updated: 2018/11/02 13:25:02 by odushko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*res;
	int		i;
	int		l;
	int		k;

	if (s)
	{
		i = -1;
		k = -1;
		l = ft_strlen(s);
		while (s[l - 1] == '\n' || s[l - 1] == '\t' || s[l - 1] == ' ')
			l--;
		while (s[++i] == '\n' || s[i] == '\t' || s[i] == ' ')
			l--;
		if (l < 0)
			l = 0;
		if (!(res = ft_strnew(l)))
			return (NULL);
		s += i;
		while (++k < l)
			res[k] = *s++;
		return (res);
	}
	return (NULL);
}
