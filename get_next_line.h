/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelhadj <abelhadj@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 12:57:31 by abelhadj          #+#    #+#             */
/*   Updated: 2023/12/15 12:56:50 by abelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
# include <limits.h>
# ifndef BUFFER_SIZE
# define BUFFER_SIZE 2
# endif

char	*ssh(char **str);
char	*get_next_line(int fd);
char	*gnl(int fd, char **line, char *buffer);
char	*ft_substr(char *s, int start, size_t len);
char	*ft_strjoin(char *s1, char *s2);
int		ft_strchr(char *str, int c);
size_t	ft_strlen(const char *s);
char	*ft_strcpy(char *dest, char *src);

#endif