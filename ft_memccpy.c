/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasomayi <jasomayi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 23:36:26 by jasomayi          #+#    #+#             */
/*   Updated: 2019/01/17 22:51:57 by jasomayi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void					*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	const unsigned char	*src_arr;
	unsigned char		*dst_arr;
	unsigned char		ch;
	size_t				i;

	src_arr = (const unsigned char *)src;
	dst_arr = (unsigned char *)dst;
	ch = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		dst_arr[i] = src_arr[i];
		if (src_arr[i] == ch)
		{
			return (void *)(&(dst_arr[i + 1]));
		}
		++i;
	}
	return (NULL);
}
