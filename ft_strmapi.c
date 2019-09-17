/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasomayi <jasomayi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 23:44:14 by jasomayi          #+#    #+#             */
/*   Updated: 2019/01/17 22:57:10 by jasomayi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*str;
	char	*ss;

	i = 0;
	ss = (char*)s;
	str = NULL;
	if (s)
	{
		if (!(str = (char*)malloc(sizeof(char) * (ft_strlen(ss) + 1))))
			return (NULL);
		if (ss)
		{
			while (ss[i])
			{
				str[i] = f(i, ss[i]);
				i++;
			}
		}
		str[i] = '\0';
	}
	return (str);
}
