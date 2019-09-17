/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasomayi <jasomayi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 18:49:56 by jasomayi          #+#    #+#             */
/*   Updated: 2019/01/25 17:51:07 by jasomayi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

static int	numb_of_words_c(char const *str, char c)
{
	int		words;
	int		i;

	i = 0;
	words = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			words++;
			while (str[i] && str[i] != c)
				i++;
		}
		i++;
	}
	return (words);
}

static int	numb_of_char(char const *str, char c, size_t i)
{
	size_t	len;
	size_t	start;

	len = 0;
	start = i;
	while (str[i] && str[i] != c)
		i++;
	len = i - start;
	return (len);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**ret;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s || (!(ret = (char**)malloc(sizeof(char*)
						* (numb_of_words_c(s, c) + 1)))))
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] && j < (size_t)numb_of_words_c(s, c))
		{
			ret[j] = ft_strsub(s, i, numb_of_char(s, c, i));
			j++;
		}
		while (s[i] && s[i] != c)
			i++;
	}
	ret[j] = NULL;
	return (ret);
}
