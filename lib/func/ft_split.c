/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaserr < eduaserr@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 13:15:53 by eduaserr          #+#    #+#             */
/*   Updated: 2024/09/09 21:12:06 by eduaserr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static void	free_split(char **str, int i)
{
	while (--i >= 0)
		free(str[i]);
	free(str);
}

static int	wordcount(char const *s, char c)
{
	int		n_word;
	int		i;

	i = -1;
	n_word = 0;
	while (s[++i])
	{
		if (s[i] != c)
		{
			n_word++;
			while (s[i] != c && s[i + 1] != '\0')
				i++;
		}
	}
	return (n_word);
}

void	get_limits_word(const char *s, char c, int *start, int *end)
{
	while (s[*start] && s[*start] == c)
		(*start)++;
	*end = *start;
	while (s[*end] && s[*end != c])
		(*end)++;
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		word_count;
	int		i;
	int		start;
	int		end;

	i = -1;
	start = 0;
	if (!s)
		return (NULL);
	word_count = wordcount(s, c);
	str = ft_calloc(word_count + 1, sizeof(char *));
	if (!str)
		return (NULL);
	while (++i < word_count)
	{
		get_limits_word(s, c, &start, &end);
		str[i] = ft_substr(s, start, end - start);
		if (!str[i])
			return (free_split(str, i), NULL);
		start = end;
	}
	str[i] = NULL;
	return (str);
}
