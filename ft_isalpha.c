/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasomayi <jasomayi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 04:17:20 by jasomayi          #+#    #+#             */
/*   Updated: 2019/01/04 05:14:03 by jasomayi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		is_upper(int u)
{
	if (u >= 65 && u <= 90)
		return (1);
	return (0);
}

static int		is_lower(int l)
{
	if (l >= 97 && l <= 122)
		return (1);
	return (0);
}

int				ft_isalpha(int c)
{
	if (is_lower(c) == 1 || is_upper(c) == 1)
		return (1);
	return (0);
}
