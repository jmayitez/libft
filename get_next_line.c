/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasomayi <jasomayi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 16:29:45 by jasomayi          #+#    #+#             */
/*   Updated: 2019/06/20 17:44:08 by jasomayi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int					ft_create_line(char **line, char *str)
{
	char			*tmp;
	int				i;

	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	if (str[i] == '\n')
	{
		*line = ft_strsub(str, 0, i);
		tmp = ft_strsub(str, i + 1, ft_strlen(str) - i - 1);
		str = ft_strcpy(str, tmp);
		free(tmp);
	}
	else
	{
		*line = ft_strdup(str);
		ft_bzero(str, ft_strlen(str));
	}
	return (1);
}

int					get_next_line(const int fd, char **line)
{
	int				ret;
	char			buf[BUFF_SIZE + 1];
	char			*tmp;
	static char		*str;

	if (!line || BUFF_SIZE <= 0 || fd < 0 || (ret = read(fd, buf, 0) == -1))
		return (-1);
	while ((ret = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[ret] = '\0';
		if (!str)
			str = ft_strdup(buf);
		else
		{
			tmp = str;
			str = ft_strjoin(str, buf);
			free(tmp);
		}
		if (ft_strchr(str, '\n'))
			break ;
	}
	return (!ret && (!str || !*str) ? 0 : ft_create_line(line, str));
}
