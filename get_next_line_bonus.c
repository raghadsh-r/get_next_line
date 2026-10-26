/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralshraw <ralshraw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 10:17:04 by ralshraw          #+#    #+#             */
/*   Updated: 2026/10/19 09:05:25 by ralshraw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_strdup(const char *s)
{
	int		lens;
	int		i;
	char	*dis;

	i = 0;
	lens = ft_strlen(s);
	dis = malloc((lens + 1) * sizeof(char));
	if (dis == NULL)
		return (NULL);
	while (lens > i)
	{
		dis[i] = s[i];
		i++;
	}
	dis[i] = '\0';
	return (dis);
}

char	*if_there_is_value(char **file )
{
	char	*line;

	if (!*file)
		*file = ft_strdup("");
	if (*file)
	{
		if (ft_strchr(*file) >= 0)
		{
			line = copy(*file, ft_strchr(*file));
			*file = newfile(*file, ft_strchr(*file));
			return (line);
		}
	}
	return (NULL);
}

int	cheak_numword(char **file, int x, char *temp)
{
	if (x == -1)
	{
		free(temp);
		free(*file);
		*file = NULL ;
		return (0);
	}
	return (1);
}

char	*read_va(char **file, int fd, int x, char *line)
{
	char	*temp;

	while (ft_strchr(*file) == -1 && x > 0)
	{
		temp = malloc(BUFFER_SIZE + 1);
		if (!temp)
		{
			free (*file);
			return (*file = NULL);
		}
		x = read(fd, temp, BUFFER_SIZE);
		if (!(cheak_numword(file, x, temp)))
			return (NULL);
		temp[x] = '\0';
		if (ft_strchr(temp) >= 0)
		{
			*file = ft_strjoin(*file, temp);
			line = copy(*file, ft_strchr(*file));
			*file = newfile(*file, ft_strchr(*file));
			return (line);
		}
		else
			*file = ft_strjoin(*file, temp);
	}
	return (NULL);
}

char	*get_next_line(int fd)
{
	static char	*file[1024];
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	line = if_there_is_value(&file[fd]);
	if (line)
		return (line);
	line = read_va(&file[fd], fd, 1, line);
	if (line)
		return (line);
	if (file[fd] && file[fd][0])
	{
		line = ft_strdup(file[fd]);
		free(file[fd]);
		file[fd] = NULL;
		return (line);
	}
	free(file[fd]);
	file[fd] = NULL;
	return (NULL);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int		fd;
// 	char	*str;

// 	fd = open("raghad", O_RDONLY);
//     str = get_next_line(fd);
//     printf("%s", str);
//     free(str);
//     str = get_next_line(fd);
//      printf("%s", str);
//     free(str);
//     str = get_next_line(fd);
//      printf("%s", str);
//     free(str);
//     str = get_next_line(fd);
//      printf("%s", str);
//     free(str);
//     str = get_next_line(fd);
//      printf("%s", str);
//     free(str);
//     str = get_next_line(fd);
//      printf("%s", str);
//     free(str);
//         str = get_next_line(fd);
//      printf("%s", str);
//     free(str);
//     close(fd);
//  	return (0);
//  }