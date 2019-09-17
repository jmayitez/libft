/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasomayi <jasomayi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 18:53:51 by jasomayi          #+#    #+#             */
/*   Updated: 2019/01/08 04:28:27 by jasomayi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	char	*len;

	len = (char *)s + ft_strlen(s);
	while (*len != c)
	{
		if (len == s)
		{
			return (NULL);
		}
		len--;
	}
	return (len);
}
