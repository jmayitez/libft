/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasomayi <jasomayi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/26 01:32:25 by jasomayi          #+#    #+#             */
/*   Updated: 2019/01/24 23:16:34 by jasomayi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>

void		ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*current;
	t_list	*tmp;

	if (*alst && alst && del)
	{
		current = *alst;
		while (current)
		{
			del(current->content, current->content_size);
			tmp = current->next;
			free(current);
			current = NULL;
			current = tmp;
		}
		*alst = NULL;
		alst = NULL;
	}
}
