/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strleni.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasomayi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 06:20:12 by jasomayi          #+#    #+#             */
/*   Updated: 2019/01/17 22:56:33 by jasomayi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t		ft_strleni(char *str, size_t index)
{
	size_t	i;

	i = index;
	while (str[i] && (ft_is_space(str[i]) == 0))
		i++;
	return (i - index);
}
