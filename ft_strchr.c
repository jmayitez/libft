/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasomayi <jasomayi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 19:13:23 by jasomayi          #+#    #+#             */
/*   Updated: 2019/01/07 22:34:56 by jasomayi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strchr(const char *s, int c)
{
	int		i;
	char	*str;

	i = 0;
	str = (char*)(s);
	while (str[i])
	{
		if (c != '\0')
		{
			if (str[i] == c)
				return (str + i);
		}
		i++;
	}
	if (c == '\0')
		return (str + i);
	return (NULL);
}
