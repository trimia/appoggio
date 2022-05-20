/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trimia <trimia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 15:30:39 by trimia            #+#    #+#             */
/*   Updated: 2022/05/20 19:00:51 by trimia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	ft_bzero(void *b, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)b;
	while (n--)
		*str++ = 0;
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*buff;

	buff = malloc(count * size);
	if (!buff)
		return (NULL);
	ft_bzero(buff, count * size);
	return (buff);
}

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(char *str, char *buffer)
{
	char	*dest;
	int		size;
	int		i;
	int		j;

	size = ft_strlen(buffer);
	j = ft_strlen(str);
	dest = (char *) malloc (sizeof(char) * (size + j + 1));
	if (!dest)
		return (NULL);
	i = -1;
	while (++i < j)
		dest[i] = str[i];
	j = -1;
	while (++j < size)
		dest[i++] = buffer[j];
	dest[i] = '\0';
	if (str != NULL)
		free(str);
	return (dest);
}

size_t	ft_strlcpy(char *str, const char *src, size_t size)
{
	size_t	i;

	i = ft_strlen(src);
	if (size != 0)
	{
		while (*src && --size)
			*str++ = *src++;
		*(str) = '\0';
	}
	return (i);
}

char	*ft_substr(char *s, unsigned int start, int len)
{
	char	*str;
	int		dim;

	dim = ft_strlen(s);
	if (!s || len == 0 || start >= dim)
		return (NULL);
	if (dim < len)
		len = dim;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	ft_strlcpy((char *)str, (const char *)(s + start), len +1);
	free(s);
	return (str);
}

int	ft_find(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
			return (0);
		i++;
	}
	return (1);
}
