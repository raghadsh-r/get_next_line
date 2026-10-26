/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralshraw <ralshraw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 10:17:33 by ralshraw          #+#    #+#             */
/*   Updated: 2026/10/19 09:21:51 by ralshraw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <fcntl.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1000

# endif

size_t	ft_strlen(const char *s);
int		ft_strchr(const char *s);
char	*copy(char *copy, int index);
char	*ft_strjoin(char *s1, char *s2);
char	*newfile(char *file, int index);
char	*ft_strdup(const char *s);
char	*if_there_is_value(char **file );
int		cheak_numword(char **file, int x, char *temp);
char	*read_va(char **file, int fd, int x, char *line);
char	*get_next_line(int fd);
#endif
