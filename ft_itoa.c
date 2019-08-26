/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odushko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/02 08:34:47 by odushko           #+#    #+#             */
/*   Updated: 2018/11/02 08:44:09 by odushko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*processing(char *res, size_t len, int s, int n)
{
	while (len--)
	{
		res[len] = n % 10 + '0';
		n /= 10;
	}
	if (s < 0)
		res[0] = '-';
	return (res);
}

char			*ft_itoa(int n)
{
	char	*res;
	size_t	len;
	int		num;
	int		s;

	len = 1;
	s = 1;
	num = n;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		len++;
		n = -n;
		s = -1;
	}
	while (num /= 10)
		len++;
	if (!(res = ft_strnew(len)))
		return (NULL);
	res = processing(res, len, s, n);
	return (res);
}
