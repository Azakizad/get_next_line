/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azakizad <azakizad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 23:13:36 by azakizad          #+#    #+#             */
/*   Updated: 2022/05/20 14:43:18 by azakizad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>

char	*get_next_line(int fd);
size_t	ft_strlen(const char *s);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(char *s1);
char	*save_the_rest(char *str, char *rest);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*return_line(char *str);
char	*read_the_line(char	**buffer, char	**line, int fd, int *reader);
char	*bs(char **buffer, char **line, int fd, int *reader);

#endif
