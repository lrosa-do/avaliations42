/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 19:49:42 by marvin            #+#    #+#             */
/*   Updated: 2021/03/29 19:49:42 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_count_strings(const char *s, char c)
{
	size_t	counter;
	size_t	next;
	size_t	c2;

	c2 = 0;
	counter = 0;
	while (s[c2])
	{
		next = c2;
		while (next < ft_strlen(s) && s[next] != c)
			next++;
		if (next - c2 != 0)
		{
			counter++;
			c2 = next + 1;
		}
		else
			c2++;
	}
	return (counter);
}

static	size_t	ft_find_delimiter(const char *s, char c, size_t start)
{
	while (s[start] && s[start] != c)
		start++;
	return (start);
}

static	char	*ft_get_str(char const *s, size_t *counter, size_t next)
{
	char	*temp;
	char	*temp2;

	temp = ft_substr(s, (unsigned int)*counter, (next - *counter));
	temp2 = (char *)malloc(sizeof(char) * (ft_strlen(temp) + 1));
	if (!temp)
		return (NULL);
	ft_strlcpy(temp2, temp, ft_strlen(temp) + 1);
	free(temp);
	*counter = next;
	return (temp2);
}

char	**ft_split(char const *s, char c)
{
	size_t	current;
	size_t	counter;
	size_t	next;
	char	**strings;

	strings = (char **)malloc(sizeof(char *) * (ft_count_strings(s, c) + 1));
	if (!strings)
		return (NULL);
	current = 0;
	counter = 0;
	while (s[counter])
	{
		next = ft_find_delimiter(s, c, counter);
		if ((next - counter) != 0)
		{
			strings[current] = ft_get_str(s, &counter, next);
			if (!strings[current])
				return (NULL);
			current++;
		}
		else
			counter++;
	}
	strings[current] = NULL;
	return (strings);
}
