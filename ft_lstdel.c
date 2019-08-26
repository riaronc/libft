/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odushko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 14:16:30 by odushko           #+#    #+#             */
/*   Updated: 2018/11/05 15:51:17 by odushko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*a;
	t_list	*b;

	a = (*alst);
	while (a)
	{
		b = a->next;
		(*del)(a->content, a->content_size);
		free(a);
		a = b;
	}
	*alst = NULL;
}
