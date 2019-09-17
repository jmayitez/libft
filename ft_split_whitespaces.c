/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasomayi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 05:53:02 by jasomayi          #+#    #+#             */
/*   Updated: 2019/01/17 22:36:57 by jasomayi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char		**ft_split_whitespaces(char *str)
{
	char	**tab;
	int		k;
	size_t	i;
	size_t	j;
	size_t	words;

	words = ft_numb_of_words(str);
	i = 0;
	k = -1;
	if (!(tab = (char **)malloc(sizeof(char*) * (words + 1))))
		return (0);
	while (i < words)
	{
		j = 0;
		if (!(tab[i] = (char *)malloc(sizeof(char) * (ft_strleni(str, k) + 1))))
			return (NULL);
		if (ft_is_space(str[++k]) == 0)
		{
			while ((ft_is_space(str[k]) == 0) && (str[k]))
				tab[i][j++] = str[k++];
			tab[i++][j++] = '\0';
		}
	}
	tab[i] = NULL;
	return (tab);
}
