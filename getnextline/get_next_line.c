/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trimia <trimia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 14:56:17 by trimia            #+#    #+#             */
/*   Updated: 2022/05/20 19:47:48 by mmariani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
//#define BUFFER_SIZE 7

char	*get_next_line(int fd)
{
	int			i;
//	int			j;
	char 		*buffer;
	static char	*nline = NULL;
	char		*temp;

	if (fd > 256 || fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer =(char *) malloc(BUFFER_SIZE + 1);
	while(ft_find(nline))
	{
		i = read(fd, buffer, BUFFER_SIZE);
		buffer[i] = 0;
		nline = ft_strjoin(nline,buffer);
	}
	free (buffer);
	i = 0;
	while (nline[i] != '\n')
		i++;
	temp = (char *)ft_calloc(i, sizeof(char));
	ft_strlcpy(temp, nline, i + 2);
	nline = ft_substr(nline, i + 1 , (ft_strlen(nline) - i));
	return(temp);
}

//#include <fcntl.h>
//#include <stdio.h>

//int main ()
//{
//	int fd;
//	char *cha;
	// fd = open("out_gnl_4.txt", O_RDONLY);
//	fd = open("1-brouette.txt", O_RDONLY);
//	printf("%s",get_next_line(fd));
	// printf("%s",get_next_line(fd));
	// printf("%s",get_next_line(fd));
	// 	printf("%s",get_next_line(fd));
	// 		printf("%s",get_next_line(fd));
	// 			printf("%s",get_next_line(fd));
	// 				printf("%s",get_next_line(fd));
	// 					printf("%s",get_next_line(fd));
	// 						printf("%s",get_next_line(fd));
	// 							printf("%s",get_next_line(fd));
	// 								printf("%s",get_next_line(fd));
	// while ((cha = get_next_line(fd)))
	// {
	// 	printf("%s", cha);
	// 	free(cha);
	// }
	
//}



