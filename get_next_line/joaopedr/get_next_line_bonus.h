/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaopedr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 10:55:01 by joaopedr          #+#    #+#             */
/*   Updated: 2022/03/29 10:59:15 by joaopedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

unsigned int	ft_strlen(char *str);
char			*ft_strjoin(char *s1, char *s2);
char			*ft_strdup(char *s);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*get_next_line(int fd);

# define OPEN_MAX 256

#endif
