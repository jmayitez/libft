/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasomayi <jasomayi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 21:52:18 by jasomayi          #+#    #+#             */
/*   Updated: 2019/01/17 22:53:03 by jasomayi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void		*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*set;

	i = 0;
	set = (char*)(b);
	while (i < len)
		set[i++] = c;
	return (set);
}
