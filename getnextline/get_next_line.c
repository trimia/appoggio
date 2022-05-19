/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trimia <trimia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 14:56:17 by trimia            #+#    #+#             */
/*   Updated: 2022/05/19 16:14:39 by trimia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
int	newline(char *str,int i)
{
	int j;

	j = -1;
	while (j < i)
		if(str[++j]=='\n')
			return (1);
	return (0);
}

char	*get_next_line(int fd)
{
	int			i;
	char 		*buffer;
	static char	*nline = NULL;
	char		*temp;

	i = 1;
	while( i != 0)
	{
		buffer = malloc(sizeof(BUFFER_SIZE));
		i = read(fd, buffer, BUFFER_SIZE);
		buffer[i]=0;
		if (newline(buffer, i))
		{
			nline = ft_strjoin(nline,buffer);
			break;
		}
	}

	strlcpy(nline,temp);
	

	nline = ft_substr(nline,start,len)
	return(temp);
}

#include <fcntl.h>

int main ()
{
	int fd;
	char *cha;
	// fd = open("out_gnl_4.txt", O_RDONLY);
	fd = open("1-brouette.txt", O_RDONLY);

	// while(fd !=0)
	while ((cha = get_next_line(fd)))
	{
		printf("%s", cha);
		free(cha);
	}
	
}



