/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaopedr <joaopedr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 22:47:16 by joaopedr          #+#    #+#             */
/*   Updated: 2022/03/29 10:37:23 by joaopedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

int	findnl(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == '\n')
			return (i);
		i++;
	}
	return (-1);
}

char	*ft_return(char **saved)
{
	char	*ret;
	char	*temp;
	int		i;

	if (!*saved || **saved == '\0')
		return (NULL);
	i = findnl(*saved);
	if (i > -1)
	{
		ret = ft_substr(*saved, 0, i + 1);
		temp = ft_substr(*saved, i + 1, ft_strlen(*saved));
		free(*saved);
		*saved = temp;
		if (**saved != '\0')
			return (ret);
	}
	else
		ret = ft_strdup(*saved);
	free(*saved);
	*saved = NULL;
	return (ret);
}

char	*get_next_line(int fd)
{
	static char	*saved[OPEN_MAX];
	char		*buf;
	char		*temp;
	int			br;

	if (fd < 0 || BUFFER_SIZE <= 0 || fd > OPEN_MAX)
		return (NULL);
	buf = malloc(sizeof(char *) * (BUFFER_SIZE + 1));
	if (!buf)
		return (NULL);
	br = read(fd, buf, BUFFER_SIZE);
	while (br > 0)
	{
		buf[br] = '\0';
		if (saved[fd] == NULL)
			saved[fd] = ft_strdup("");
		temp = ft_strjoin(saved[fd], buf);
		free(saved[fd]);
		saved[fd] = temp;
		if (findnl(saved[fd]) >= 0)
			break ;
		br = read(fd, buf, BUFFER_SIZE);
	}
	free (buf);
	return (ft_return(&saved[fd]));
}
