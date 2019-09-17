/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countword.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasomayi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/20 17:34:57 by jasomayi          #+#    #+#             */
/*   Updated: 2019/06/20 17:35:03 by jasomayi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_countword(const char *s, char c)
{
	int i;
	int j;
	int boole;

	i = 0;
	j = 0;
	boole = 0;
	while (s[i])
	{
		if (boole == 1 && s[i] == c)
			boole = 0;
		if (boole == 0 && s[i] != c)
		{
			j++;
			boole = 1;
		}
		i++;
	}
	return (j);
}
