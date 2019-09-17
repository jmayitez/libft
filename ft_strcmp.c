/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasomayi <jasomayi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 21:57:24 by jasomayi          #+#    #+#             */
/*   Updated: 2019/01/17 22:54:43 by jasomayi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int					ft_strcmp(const char *s1, const char *s2)
{
	size_t			i;
	unsigned char	*p1;
	unsigned char	*p2;
	unsigned int	diff;

	i = 0;
	p1 = (unsigned char*)s1;
	p2 = (unsigned char*)s2;
	while (p1[i] && p2[i] && p1[i] == p2[i])
		i++;
	if (p1[i] == '\0' && p2[i] == '\0')
		return (0);
	diff = p1[i] - p2[i];
	return (diff);
}
