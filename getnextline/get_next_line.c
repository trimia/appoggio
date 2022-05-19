/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trimia <trimia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 14:56:17 by trimia            #+#    #+#             */
/*   Updated: 2022/05/19 15:33:43 by trimia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	int			i;
	char 		*buffer;
	static char	*nline;
	char		*temp;

	i = 1;
	while( i != 0)
	{
		i = read(fd, buffer, BUFFER_SIZE);
		buffer[i]=0;
		if (newline(buffer)=='\n')
		{
			nline = ft_strjoin(nline,buffer);
			break;
		}
	}

	strlcpy(nline,temp)

	substr(line_n,start,len)
	return(temp);
}




