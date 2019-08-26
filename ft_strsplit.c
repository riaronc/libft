/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odushko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/02 13:56:18 by odushko           #+#    #+#             */
/*   Updated: 2018/11/05 09:16:04 by odushko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int		ft_count(const char *s, char c)
{
	int		count;
	int		i;

	i = 0;
	count = 0;
	while (*s != '\0')
	{
		if (i == 1 && *s == c)
			i = 0;
		if (i == 0 && *s != c)
		{
			i = 1;
			count++;
		}
		s++;
	}
	return (count);
}

static int		ft_wordlen(const char *s, char c)
{
	int		len;

	len = 0;
	while (*s != c && *s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**res;
	int		words;
	int		i;

	if (s && c)
	{
		i = 0;
		words = ft_count(s, c);
		if (!(res = (char **)malloc(sizeof(char *) * (ft_count(s, c) + 1))))
			return (NULL);
		while (words)
		{
			while (*s == c && *s != '\0')
				s++;
			if (!(res[i] = ft_strsub(s, 0, ft_wordlen(s, c))))
				return (NULL);
			s += ft_wordlen(s, c);
			i++;
			words--;
		}
		res[i] = NULL;
		return (res);
	}
	return (NULL);
}
