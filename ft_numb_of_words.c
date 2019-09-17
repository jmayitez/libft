/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numb_of_words.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasomayi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 05:54:42 by jasomayi          #+#    #+#             */
/*   Updated: 2019/01/17 22:53:36 by jasomayi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t		ft_numb_of_words(char *str)
{
	size_t	words;
	size_t	i;

	i = 0;
	words = 0;
	while (str[i])
	{
		if (str[i] && (ft_is_space(str[i]) == 0))
		{
			while (str[i] && (ft_is_space(str[i]) == 0))
				i++;
			words++;
		}
		else
			i++;
	}
	return (words);
}
