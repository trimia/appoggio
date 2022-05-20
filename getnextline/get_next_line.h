/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trimia <trimia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 15:10:45 by trimia            #+#    #+#             */
/*   Updated: 2022/05/20 19:33:47 by trimia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

#include <stdlib.h>
#include <unistd.h>

char	*get_next_line(int fd);
char	*ft_strjoin(char *str, char *buffer);
size_t	ft_strlcpy(char *str, const char *src, size_t size);
char	*ft_substr(char *s, unsigned int start, int len);
int		ft_strlen(const char *str);
size_t	ft_strlcpy(char *str, const char *src, size_t size);
int		ft_find(char *str);
void	ft_bzero(void *b, size_t n);
void	*ft_calloc(size_t count, size_t size);


#endif