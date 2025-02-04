/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 17:54:36 by rabouzia          #+#    #+#             */
/*   Updated: 2024/11/08 00:00:05 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube.h"

void	*ft_memchr(const char *str, int c)
{
	unsigned char	*res;

	res = (unsigned char *)str;
	while (*res)
	{
		if (*res == (unsigned char)c)
			return (res);
		res++;
	}
	return (NULL);
}

char	*for_strjoin(char *s1, char *s2)
{
	int		i;
	int		j;
	char	*str;

	j = -1;
	if (!s1)
		return (ft_strdup(s2));
	str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (str == NULL)
		return (NULL);
	i = -1;
	while (s1[++i])
		str[i] = s1[i];
	while (s2[++j])
	{
		str[i] = s2[j];
		i++;
		if (s2[j] == '\n')
			break ;
	}
	str[i] = '\0';
	return (free(s1), str);
}

int	ft_strchr(char *str, char c)
{
	int	i;

	if (str == NULL)
		return (0);
	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}
