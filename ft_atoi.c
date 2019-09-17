/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasomayi <jasomayi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 04:12:27 by jasomayi          #+#    #+#             */
/*   Updated: 2019/01/28 19:21:02 by jasomayi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int				ft_atoi(const char *str)
{
	size_t		i;
	int			neg;
	long long	res;

	i = 0;
	res = 0;
	neg = 1;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\r'
			|| str[i] == '\v' || str[i] == '\f' || str[i] == ' ')
		i++;
	if (str[i] == '-')
		neg = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] && str[i] > 47 && str[i] < 58)
	{
		if (res * neg < -2147483648)
			return (0);
		if (res * neg > 2147483647)
			return (-1);
		res = res * 10 + str[i] - 48;
		i++;
	}
	return (neg * res);
}
