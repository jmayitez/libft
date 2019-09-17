/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasomayi <jasomayi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 02:56:50 by jasomayi          #+#    #+#             */
/*   Updated: 2019/01/17 23:03:46 by jasomayi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char		*ft_strtrim(char const *s)
{
	size_t	start;
	size_t	len;

	start = 0;
	if (s)
	{
		while ((s[start] == ' ' || s[start] == '\n' || s[start] == '\t'))
			start++;
		if (s[start] == '\0')
			return (ft_strdup(s + start));
		len = ft_strlen(s) - 1;
		while ((s[len] == ' ' || s[len] == '\t' || s[len] == '\n') && len > 0)
			len--;
		return (ft_strsub(s, start, len - start + 1));
	}
	return (NULL);
}
